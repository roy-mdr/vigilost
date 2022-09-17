#include "objfound.h"
#include "ui_objfound.h"

objFound::objFound(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::objFound)
{
    ui->setupUi(this);

    ui->foundID->setValidator(new QIntValidator(0, 999999, this)); //Define que el campo de texto "foundID" sea sólo de números hasta el 999999 (6 dígitos máximo).
    ui->foundNombre->setPlaceholderText(QString("Juan Perez"));
    ui->foundID->setPlaceholderText(QString("175528"));
}

objFound::~objFound()
{
    delete ui;
}

void objFound::on_buttonBox_accepted()
{
    if(ui->foundNombre->text() != ""){
        if(ui->foundID->text().length() == 6){

            emit fData(ui->foundNombre->text(), ui->foundID->text());

        }else{
            QMessageBox::information(this,"ERROR", "<b>El ID debe ser de 6 dígitos.</b>");
        }
    }else{
        QMessageBox::information(this,"ERROR", "<b>Debe de ingresar un nombre válido.</b>");
    }
}
