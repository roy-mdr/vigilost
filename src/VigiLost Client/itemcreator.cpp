#include "files.h"

#include "itemcreator.h"
#include "ui_itemcreator.h"
#include "about.h"

ItemCreator::ItemCreator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ItemCreator)
{
    ui->setupUi(this);

    checkRadios();


    ui->statusBar->showMessage("Interfaz Gráfica inicializada correctamente.",3000);
}

ItemCreator::~ItemCreator()
{
    delete ui;
}

void ItemCreator::on_dataBuscar_textChanged(const QString &arg1) //Al escribir en el campo de texto de buscar:
{
    if(ui->radioPerdidos->isChecked()){
        searchOnTable(lf);
        loadOnTable(lf);
    }
    if(ui->radioEncontrados->isChecked()){
        searchOnTable(ff);
        loadOnTable(ff);
    }
}

void ItemCreator::on_actualizarBtn_clicked() //Al presionar "Actualizar":
{
    delTable(); //Borra la tabla
    if(ui->radioPerdidos->isChecked()){
        loadOnTable(lf);
    }
    if(ui->radioEncontrados->isChecked()){
        loadOnTable(ff);
    }
}


void ItemCreator::on_radioPerdidos_clicked()
{
    checkRadios();
}

void ItemCreator::on_radioEncontrados_clicked()
{
    checkRadios();
}


void ItemCreator::on_actionAcerca_de_VigiLost_triggered()
{
    About abW;
    abW.setWindowFlags(Qt::CustomizeWindowHint);
    abW.setModal(true);
    abW.exec();
}

//---------------------------------------------------------------------------------------------------------------------------------------------------

//Cargar contenido del archivo (varía segun se mande a llamar) en la tabla.
void ItemCreator::loadOnTable(QFile &file)
{
    if( file.size() <= 0){ //Si el archivo no contiene información, guarda un nuevo archivo; si sí contiene, carga el archivo.
        ui->dataBuscar->setDisabled(true);
        while (ui->tableWidget->columnCount() > 1){
            ui->tableWidget->removeColumn(1);
        }
        ui->tableWidget->setHorizontalHeaderItem(0, new QTableWidgetItem("Datos no encontrados..."));
        ui->tableWidget->setDisabled(true);
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

        ui->dataBuscar->setEnabled(true);
        ui->tableWidget->setEnabled(true);

        ui->tableWidget->setHorizontalHeaderItem(0, new QTableWidgetItem("Objeto"));
        ui->tableWidget->setHorizontalHeaderItem(1, new QTableWidgetItem("Propietario"));
        ui->tableWidget->setHorizontalHeaderItem(2, new QTableWidgetItem("Color/Dibujo"));
        ui->tableWidget->setHorizontalHeaderItem(3, new QTableWidgetItem("Encontrado(a) en"));
        ui->tableWidget->setHorizontalHeaderItem(4, new QTableWidgetItem("Otros"));
        ui->tableWidget->setHorizontalHeaderItem(5, new QTableWidgetItem("Encontrado por"));
        ui->tableWidget->setHorizontalHeaderItem(6, new QTableWidgetItem("ID"));
    }


    ui->statusBar->showMessage("Tabla actualizada con éxito.",3000);
}

//Busca las filas de la tabla donde se encuentre el contenido del campo de texto "buscar" y oculta las demás. NO LAS CARGA CON DATOS: las deja vacías.
void ItemCreator::searchOnTable(QFile &file)
{
    delTable();

    QString cad = ui->dataBuscar->text(); //Texto introducido en "Buscar".

    if( file.size() == 0){ //Si ".oPerdidos" no contiene información, guarda un nuevo archivo; si sí contiene, carga el archivo.
        while (ui->tableWidget->columnCount() > 1){
            ui->tableWidget->removeColumn(1);
        }
        ui->tableWidget->setHorizontalHeaderItem(0, new QTableWidgetItem("Datos no encontrados..."));
        ui->tableWidget->setDisabled(true);
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

void ItemCreator::delSearchTXT()
{
    ui->dataBuscar->setText("");
}

void ItemCreator::checkRadios()
{
    delSearchTXT(); //Borra lo escrito en "buscar".
    delTable(); //Borra la tabla

    if(ui->radioPerdidos->isChecked()){
        this->setWindowTitle("VigiLost - Objetos Perdidos");

        ui->dataBuscar->setPlaceholderText(QString("Cable / Morado / Frances / ...")); //Escribe las -instrucciones- en los campos de texto.

        ui->label->setText("Objetos Perdidos");

        //searchOnTable(lf);
        loadOnTable(lf);
    }
    if(ui->radioEncontrados->isChecked()){
        this->setWindowTitle("VigiLost - Objetos Encontrados");

        ui->dataBuscar->setPlaceholderText(QString("Mochila / Claudia / 175528 / ...")); //Escribe las -instrucciones- en los campos de texto.

        ui->label->setText("Objetos Encontrados");

        //searchOnTable(ff);
        loadOnTable(ff);

        //ui->tableWidget->setHorizontalHeaderItem(5, new QTableWidgetItem("Encontrado por"));
        //ui->tableWidget->setHorizontalHeaderItem(6, new QTableWidgetItem("ID"));
    }


    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);  //Ajusta las columnas al tamaño del contenedor.
    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);  //Ajusta las filas al tamaño del contenido.
}
