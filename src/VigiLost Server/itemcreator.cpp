#include "files.h"

#include "itemcreator.h"
#include "ui_itemcreator.h"
#include "objfound.h"
#include "objfoundform.h"
#include "about.h"

#include <QGlobalStatic>

Q_GLOBAL_STATIC(classIC,uniqueInstance)

ItemCreator::ItemCreator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ItemCreator)
{
    ui->setupUi(this);

    //Escribe las -instrucciones- en los campos de texto.
    ui->dataObjeto->setPlaceholderText(QString("Libreta / Chamarra / Lentes"));
    ui->dataPropietario->setPlaceholderText(QString("Juan Perez / Paula / Hinojosa"));
    ui->dataColor->setPlaceholderText(QString("Rojo / Superheroes / Figuras"));
    ui->dataEncontrado->setPlaceholderText(QString("Aula 13 / Pasillo / Cafetería"));
    ui->dataOtro->setPlaceholderText(QString("Cuadrícula, Ingles, Stickers, etc..."));
    ui->dataBuscar->setPlaceholderText(QString("Cable / Morado / Frances / ..."));

    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);  //Ajusta las columnas al tamaño del contenedor.
    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);  //Ajusta las filas al tamaño del contenido.

    loadOnTable(lf);  //Cargar contenido del archivo ".oPerdidos" en la tabla

    checkRadios();


    ui->statusBar->showMessage("Interfaz Gráfica inicializada correctamente.",3000);
}

ItemCreator::~ItemCreator()
{
    delete ui;
}

ItemCreator* ItemCreator::getInstanceIC()
{
    return uniqueInstance;
}

void ItemCreator::on_addObjetoBtn_clicked() //Al presionar "AÑADIR OBJETO":
{
    int rc = ui->tableWidget->rowCount(); //cuenta el numero de filas
    //int cc = ui->tableWidget->columnCount(); //cuenta el numero de columnas


    //Si ningun campo obligatorio esta vacio, ejecuta la accion:
    if(!(ui->dataObjeto->text() == "") & !(ui->dataPropietario->text() == "") & !(ui->dataColor->text() == "") & !(ui->dataEncontrado->text() == "")){

        ui->tableWidget->setRowCount(rc+1); //añade una nueva fila

        //introduce los datos escritos en la última fila (la nueva)
        ui->tableWidget->setItem(rc, 0, new QTableWidgetItem(ui->dataObjeto->text()));
        ui->tableWidget->setItem(rc, 1, new QTableWidgetItem(ui->dataPropietario->text()));
        ui->tableWidget->setItem(rc, 2, new QTableWidgetItem(ui->dataColor->text()));
        ui->tableWidget->setItem(rc, 3, new QTableWidgetItem(ui->dataEncontrado->text()));
        ui->tableWidget->setItem(rc, 4, new QTableWidgetItem(ui->dataOtro->text()));

        //Borra los campos de texto
        ui->dataObjeto->clear();
        ui->dataColor->clear();
        ui->dataEncontrado->clear();
        ui->dataOtro->clear();

        ui->radioCon->setChecked(true);
        checkRadios();

        //Resetea las etiquetas de rojo a negro
        ui->labelObjeto->setStyleSheet("QLabel { color: black }");
        ui->labelPropietario->setStyleSheet("QLabel { color: black }");
        ui->labelColor->setStyleSheet("QLabel { color: black }");
        ui->labelEncontrado->setStyleSheet("QLabel { color: black }");


        //Guarda la tabla en archivo.
        saveTable(lf);

        //Llama nuevamente a la tabla (para asegurar)
        loadOnTable(lf);


        ui->statusBar->showMessage("Objeto añadido con éxito.",3000);

        ui->dataObjeto->setFocus();

    }else{

        //Pone en rojo todos los campos obligatorios que esten vacios y los que no, los pone en negro nuevamente
        if(ui->dataObjeto->text() == "")     { ui->labelObjeto->setStyleSheet("QLabel { color: red }");      }else{ ui->labelObjeto->setStyleSheet("QLabel { color: black }");}
        if(ui->dataPropietario->text() == ""){ ui->labelPropietario->setStyleSheet("QLabel { color: red }"); }else{ ui->labelPropietario->setStyleSheet("QLabel { color: black }");}
        if(ui->dataColor->text() == "")      { ui->labelColor->setStyleSheet("QLabel { color: red }");       }else{ ui->labelColor->setStyleSheet("QLabel { color: black }");}
        if(ui->dataEncontrado->text() == "") { ui->labelEncontrado->setStyleSheet("QLabel { color: red }");  }else{ ui->labelEncontrado->setStyleSheet("QLabel { color: black }");}


        ui->statusBar->showMessage("Campos obligatorios vacíos.",3000);
    }
}

void ItemCreator::on_buscarBtn_clicked() //Al presionar "Buscar":
{
    searchOnTable(lf); //una vez encontradas las filas
    loadOnTable(lf); //carga los datos en ellas
}

void ItemCreator::on_dataBuscar_textChanged(const QString &arg1) //Al escribir en el campo de texto de buscar:
{
    searchOnTable(lf); //una vez encontradas las filas
    loadOnTable(lf); //carga los datos en ellas
}

void ItemCreator::on_delBtn_clicked() //Al presionar "Quitar Objeto":
{
    if(ui->tableWidget->currentRow() >= 0){  //Si hay una celda seleccionada hacer...

        int alertaDel = QMessageBox::warning(this,"¡ALERTA!",
                                             "<font color=red><b>LA ACCIÓN NO SE PUEDE DESHACER</b></font> <p> <b>¿DESEA CONTINUAR?</b> <p> Si el objeto fue encontrado con éxito, seleccione el botón <font color=green><b> ¡ENCONTRADO! </b></font>.",
                                             QMessageBox::Ok, QMessageBox::Cancel | QMessageBox::Default); // | QMessageBox::Escape (por default)
        if (alertaDel == QMessageBox::Ok) {
            ui->tableWidget->removeRow(ui->tableWidget->currentRow()); //Borra la fila seleccionada

            askSave(lf); //Pregunta si realmente quiere guardar la lista
        }
    }else{
        QMessageBox::information(this,"ERROR", "Debe de seleccionar un objeto para borrar.", QMessageBox::Ok);
    }
}

void ItemCreator::on_doneBtn_clicked() //Al presionar "¡ENCONTRADO!":
{
    if(ui->tableWidget->currentRow() >= 0){  //Si hay una celda seleccionada hacer...

        //Conectar SIGNALS&SLOTS y abrir ventana de dialogo "objFound".
        objFound *objF = new objFound();
        connect(objF, SIGNAL(fData(QString, QString)), this, SLOT(getFoundData(QString,QString)));
        objF->setModal(true);
        objF->exec();

        //if (objF->result() == 1) //Si se presiona 'OK' :
    }else{
        QMessageBox::information(this,"ERROR", "¡Debe de seleccionar el objeto encontrado!", QMessageBox::Ok);
    }
}

void ItemCreator::on_foundBtn_clicked()
{
    openFound();
    //this->close();
}

void ItemCreator::on_actualizarBtn_clicked() //Al presionar "Actualizar":
{
    delTable(); //Borra la tabla
    loadOnTable(lf); //re-carga la tabla
}

void ItemCreator::on_saveBtn_clicked()//Al presionar "Guardar":
{
    askSave(lf);
    loadOnTable(lf);
}


void ItemCreator::on_actionAcerca_de_VigiLost_triggered()
{
    About abW;
    abW.setWindowFlags(Qt::CustomizeWindowHint);
    abW.setModal(true);
    abW.exec();
}

//---------------------------------------------------------------------------------------------------------------------------------------------------

//Guarda la tabla en el documento que se le manda a guardar.
void ItemCreator::saveTable(QFile &file)
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
void ItemCreator::loadOnTable(QFile &file)
{
    if( file.size() <= 0){ //Si el archivo no contiene información, guarda un nuevo archivo; si sí contiene, carga el archivo.
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
                QStringList cel = line.split( "|" ); //Caracter en el archivo para indicar fin de celda.

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

//Pregunta si realmente quiere guardar la lista.
void ItemCreator::askSave(QFile &file)
{
    int alertaSave = QMessageBox::warning(this,"¡ALERTA!",
                                          "<b>¿DESEA GUARDAR CAMBIOS EN LA LISTA?</b>",
                                          QMessageBox::Ok, QMessageBox::Cancel | QMessageBox::Default);

    if (alertaSave == QMessageBox::Ok)
    {
        saveTable(file); //Guarda cambios a la lista
    }
    else
    {
        loadOnTable(file); //Re-carga la lista en la tabla
    }
}

//Busca las filas de la tabla donde se encuentre el contenido del campo de texto "buscar" y oculta las demás. NO LAS CARGA CON DATOS: las deja vacías.
void ItemCreator::searchOnTable(QFile &file)
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
void ItemCreator::delTable()
{
    while (ui->tableWidget->rowCount() > 0){
        ui->tableWidget->removeRow(0);
    }
}




//Recibe la información escrita en los campos de texto de el dialogo "objFound" y los añade en la tabla del archivo "ff" (objetos encontrados)
void ItemCreator::getFoundData(QString fN, QString fID)
{    
    int cr = ui->tableWidget->currentRow();

    if( ff.open( QIODevice::ReadWrite ) ){
        QTextStream ts( &ff );
        QStringList strList;

        if(ff.size() > 0){ //Si el archivo ya tiene datos...
            ts.readAll(); //Incluye el contenido que ya contenía el archivo
        }

        //Añade al archivo el contenido de la fila del objeto seleccionado
        for( int c = 0; c < ui->tableWidget->columnCount(); ++c ){
            strList << ui->tableWidget->item( cr, c )->text().replace( "\n" , ",");
        }

        //Añade al archivo dos nuevas columnas: Nombre y ID.
        strList << fN.replace( "\n" , ",");
        strList << fID.replace( "\n" , ",");

        ts << strList.join( "|" )+"\n";
    }
    ff.close();

    ui->tableWidget->removeRow(cr);

    saveTable(lf);

    on_foundBtn_clicked(); //Abre la tabla de objetos encontrados.
}



//Activa o desactiva la caja de texto "Propietario" dependiendo del radioButton seleccionado
void ItemCreator::checkRadios()
{
    if (ui->radioSin->isChecked()){
        ui->dataPropietario->setDisabled(true);
        ui->dataPropietario->setText("Sin Nombre");
    }
    if (ui->radioCon->isChecked()){
        ui->dataPropietario->setText("");
        ui->dataPropietario->setDisabled(false);
    }
}

void ItemCreator::on_radioCon_clicked()
{
    checkRadios();
}

void ItemCreator::on_radioSin_clicked()
{
    checkRadios();
}

void ItemCreator::delSearchTXT()
{
    ui->dataBuscar->setText("");
}

void ItemCreator::openFound()
{
    ObjFoundForm *wOFF = ObjFoundForm::getInstanceOFF();

    wOFF->delSearchTXT();
    wOFF->on_actualizarBtn_clicked(); //Se actualiza la tabla de objetos encontrados.
    wOFF->show(); //Se muestra la ventana de la tabla.
    wOFF->setWindowState(wOFF->windowState() & ~Qt::WindowMinimized | Qt::WindowActive); //Si la ventana está minimizada, se maximiza.
    wOFF->activateWindow(); //Se pone la ventana al frente.


    ui->statusBar->showMessage("Abriendo tabla de objetos encontrados...",3000);
}
