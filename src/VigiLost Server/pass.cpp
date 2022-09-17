#include "files.h"

#include "pass.h"
#include "ui_pass.h"

pass::pass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pass)
{
    ui->setupUi(this);
}

pass::~pass()
{
    delete ui;
}

void pass::on_buttonBox_accepted()
{
    if(ui->passInput->text() == passWord){

        ObjFoundForm *wOFF = ObjFoundForm::getInstanceOFF();
        wOFF->errorProcess();
        QMessageBox::information(this,"ATENCIÓN", "<b>El objeto fue movido a -Objetos perdidos-.</b> <p> Se eliminaron los datos de quien los recogió.", QMessageBox::Ok);

    }else{
        QMessageBox::information(this,"ERROR", "<font color=red><b>Contraseña incorrecta.</b></font> <p> Contacte con el administrador.");
    }
}
