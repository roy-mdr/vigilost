#include "files.h"

#include "objfoundform.h"
#include "ui_objfoundform.h"
#include "itemcreator.h"
#include "about.h"
#include "pass.h"

#include <QGlobalStatic>

Q_GLOBAL_STATIC(classOFF,uniqueInstance)

ObjFoundForm::ObjFoundForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ObjFoundForm)
{
    ui->setupUi(this);

    ui->dataBuscar->setPlaceholderText(QString("Mochila / Claudia / 175528 / ..."));

    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);  //Ajusta las columnas al tamaño del contenedor.
    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);  //Ajusta las filas al tamaño del contenido.

    loadOnTable(ff);


    ui->statusBar->showMessage("Interfaz Gráfica inicializada correctamente.",3000);
}

ObjFoundForm::~ObjFoundForm()
{
    delete ui;
}

ObjFoundForm* ObjFoundForm::getInstanceOFF()
{
    return uniqueInstance;
}

void ObjFoundForm::on_buscarBtn_clicked() //Al presionar "Buscar":
{
    searchOnTable(ff); //una vez encontradas las filas
    loadOnTable(ff); //carga los datos en ellas
}

void ObjFoundForm::on_dataBuscar_textChanged(const QString &arg1) //Al escribir en el campo de texto de buscar:
{
    searchOnTable(ff); //una vez encontradas las filas
    loadOnTable(ff); //carga los datos en ellas
}

void ObjFoundForm::on_lostBtn_clicked()
{
    openLost();
    //this->close();
}

void ObjFoundForm::on_errorBtn_clicked()
{
    if(ui->tableWidget->currentRow() >= 0){  //Si hay una celda seleccionada hacer...
        int alertaError = QMessageBox::warning(this,"¡ALERTA!",
                                               "<font color=red><b>LA ACCIÓN NO SE PUEDE DESHACER</b></font> <p> <b>¿DESEA CONTINUAR?</b> <p> Sólo debe continuar si existió un error al marcar el objeto como encontrado. <p> (Ej. ID o Nombre incorrectos, no era el objeto que se encontró, etc.) </b></font>.",
                                               QMessageBox::Ok, QMessageBox::Cancel | QMessageBox::Default); // | QMessageBox::Escape (por default)

        if(alertaError == QMessageBox::Ok){

            //abrir ventana de dialogo "pass".
            pass *wPass = new pass();
            wPass->setModal(true);
            wPass->exec();

        }

        //if (objF->result() == 1) //Si se presiona 'OK' :
    }else{
        QMessageBox::information(this,"ERROR", "¡Debe de seleccionar un objeto para continuar!", QMessageBox::Ok);
    }
}

void ObjFoundForm::on_actualizarBtn_clicked()
{
    delTable();
    loadOnTable(ff);
}

//---------------------------------------------------------------------------------------------------------------------------------------------------

//Guarda la tabla en el documento que se le manda a guardar.
void ObjFoundForm::saveTable(QFile &file)
{
    if( file.open( QIODevice::WriteOnly ) ){
        QTextStream ts( &file );  // #include <QtCore/QTextStream>
        QStringList strList;

        for( int r = 0; r < ui->tableWidget->rowCount(); ++r ){
            strList.clear();
            for( int c = 0; c < ui->tableWidget->columnCount(); ++c ){
                strList << ui->tableWidget->item( r, c )->text().replace( "\n" , ",");
            }
            ts << strList.join( "|" )+"\n";
        }
        file.close();
    }


    ui->statusBar->showMessage("Tabla guardada con éxito.",3000);
}

//Cargar contenido del archivo (varía segun se mande a llamar) en la tabla.
void ObjFoundForm::loadOnTable(QFile &file)
{
    if( file.size() == 0){ //Si el archivo no contiene información, guarda un nuevo archivo; si sí contiene, carga el archivo.
        saveTable(file);
    }else{

        if( file.open( QIODevice::ReadOnly ) )
        {
            QTextStream ts( &file );  // #include <QtCore/QTextStream>
            QList<QStringList> list;
            int row = 0, col = 0;

            // read entire file and parse lines into list of stringlist's
            while( !ts.atEnd() )
            {
                QString line = ts.readLine();
                QStringList cel = line.split( "|" ); //Caracter en ".oPerdidos" para indicar fin de celda.

                list << cel;
            }

            file.close();  // done with file

            // prep table
            ui->tableWidget->setRowCount( list.count() );  // number of stringlists give row count
            ui->tableWidget->setColumnCount( list[0].count() );  // count of entries from intial stringlist for column count

            ui->tableWidget->setUpdatesEnabled( false );  // for faster processing of large lists
            foreach( QStringList l, list )
            {
                foreach( QString str, l )
                {
                    // remove quotes if str quoted
                    if( str.endsWith( '"' ) ) str.chop(1);
                    if( str.startsWith( '"' ) ) str.remove(0,1);

                    str.replace( ", " , "\n");
                    str.replace( "," , "\n");

                    ui->tableWidget->setItem( row, col++, new QTableWidgetItem( str ));

                }
                row++; col=0;
            }
            ui->tableWidget->setUpdatesEnabled( true );  // done with load
        }
    }


    ui->statusBar->showMessage("Tabla actualizada con éxito.",3000);
}

//Busca las filas de la tabla donde se encuentre el contenido del campo de texto "buscar" y oculta las demás. NO LAS CARGA CON DATOS: las deja vacías.
void ObjFoundForm::searchOnTable(QFile &file)
{
    delTable();

    QString cad = ui->dataBuscar->text(); //Texto introducido en "Buscar".

    if( file.size() == 0){ //Si ".oPerdidos" no contiene información, guarda un nuevo archivo; si sí contiene, carga el archivo.
        saveTable(file);
    }else{

        if( file.open( QIODevice::ReadOnly ) ){
            QTextStream ts( &file );  // #include <QtCore/QTextStream>
            QList<QStringList> list;
            int row = 0, col = 0;

            // read entire file and parse lines into list of stringlist's
            while( !ts.atEnd() )
            {
                QString line = ts.readLine();
                QStringList cel = line.split( "|" ); //Caracter en ".oPerdidos" para indicar fin de celda.

                list << cel;
            }

            file.close();  // done with file

            // prep table
            ui->tableWidget->setRowCount( list.count() );  // number of stringlists give row count
            ui->tableWidget->setColumnCount( list[0].count() );  // count of entries from intial stringlist for column count

            ui->tableWidget->setUpdatesEnabled( false );  // for faster processing of large lists

            foreach( QStringList l, list )
            {
                ui->tableWidget->setRowHidden(row,true);

                foreach( QString str, l ){
                    // remove quotes if str quoted
                    if( str.endsWith( '"' ) ) str.chop(1);
                    if( str.startsWith( '"' ) ) str.remove(0,1);

                    str.replace( ", " , "\n");
                    str.replace( "," , "\n");

                    if (str.contains(cad, Qt::CaseInsensitive) == true){
                        ui->tableWidget->setRowHidden(row,false);
                    }
                }
                row++; col=0;
            }
            ui->tableWidget->setUpdatesEnabled( true );  // done with load
        }
    }
}

//Borra toda la tabla :v
void ObjFoundForm::delTable()
{
    while (ui->tableWidget->rowCount() > 0){
        ui->tableWidget->removeRow(0);
    }
}


void ObjFoundForm::errorProcess()
{
    int cr = ui->tableWidget->currentRow();

    if( lf.open( QIODevice::ReadWrite ) ){
        QTextStream ts( &lf );
        QStringList strList;

        if(lf.size() > 0){ //Si el archivo ya tiene datos...
            ts.readAll(); //Incluye el contenido que ya contenía el archivo
        }

        //Añade al archivo el contenido de la fila del objeto seleccionado
        for( int c = 0; c < ui->tableWidget->columnCount() - 2; ++c ){  // -2 para quitar la columna NOMBRE y ID.
            strList << ui->tableWidget->item( cr, c )->text().replace( "\n" , ",");
        }

        ts << strList.join( "|" )+"\n";
    }
    lf.close();

    ui->tableWidget->removeRow(cr);

    saveTable(ff);

    on_lostBtn_clicked(); //Abre la tabla de objetos perdidos.
}




void ObjFoundForm::delSearchTXT()
{
    ui->dataBuscar->setText("");
}

void ObjFoundForm::openLost()
{
    ItemCreator *wIC = ItemCreator::getInstanceIC();

    wIC->delSearchTXT();
    wIC->on_actualizarBtn_clicked(); //Se actualiza la tabla de objetos encontrados.
    wIC->show(); //Se muestra la ventana de la tabla.
    wIC->setWindowState(wIC->windowState() & ~Qt::WindowMinimized | Qt::WindowActive); //Si la ventana está minimizada, se maximiza.
    wIC->activateWindow(); //Se pone la ventana al frente.


    ui->statusBar->showMessage("Abriendo tabla de objetos perdidos...",3000);
}
