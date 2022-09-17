#ifndef ITEMCREATOR_H
#define ITEMCREATOR_H

#include <QMainWindow>
#include <QtCore>
#include <QMessageBox>

#include "files.h"

namespace Ui {
class ItemCreator;
}

class ItemCreator : public QMainWindow
{
    Q_OBJECT

    friend class classIC;

public slots:
    void on_actualizarBtn_clicked();

    void delSearchTXT();

    void getFoundData(QString fN, QString fID);

public:
    //explicit ItemCreator(QWidget *parent = 0);

    static ItemCreator *getInstanceIC();
    ~ItemCreator();

private slots:
    void saveTable(QFile &file);
    void loadOnTable(QFile &file);
    void askSave(QFile &file);
    void searchOnTable(QFile &file);
    void delTable();

    void openFound();

    void on_addObjetoBtn_clicked();

    void on_delBtn_clicked();

    void on_saveBtn_clicked();

    void on_doneBtn_clicked();

    void on_buscarBtn_clicked();

    void checkRadios();

    void on_dataBuscar_textChanged(const QString &arg1);

    void on_radioCon_clicked();

    void on_radioSin_clicked();

    void on_foundBtn_clicked();

    void on_actionAcerca_de_VigiLost_triggered();

private:
    explicit ItemCreator(QWidget *parent = 0);
    Ui::ItemCreator *ui;
};

class classIC: public ItemCreator
{
};

#endif // ITEMCREATOR_H
