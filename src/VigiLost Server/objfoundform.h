#ifndef OBJFOUNDFORM_H
#define OBJFOUNDFORM_H

#include <QMainWindow>
#include <QtCore>
#include <QMessageBox>

namespace Ui {
class ObjFoundForm;
}

class ObjFoundForm : public QMainWindow
{
    Q_OBJECT

    friend class classOFF;

public slots:
    void on_actualizarBtn_clicked();

    void delSearchTXT();

    void errorProcess();

public:
    //explicit ObjFoundForm(QWidget *parent = 0);

    static ObjFoundForm *getInstanceOFF();
    ~ObjFoundForm();

private slots:
    void saveTable(QFile &file);
    void loadOnTable(QFile &file);
    void searchOnTable(QFile &file);
    void delTable();

    void openLost();

    void on_buscarBtn_clicked();

    void on_dataBuscar_textChanged(const QString &arg1);

    void on_errorBtn_clicked();

    void on_lostBtn_clicked();

private:
    explicit ObjFoundForm(QWidget *parent = 0);
    Ui::ObjFoundForm *ui;
};

class classOFF : public ObjFoundForm
{
};

#endif // OBJFOUNDFORM_H
