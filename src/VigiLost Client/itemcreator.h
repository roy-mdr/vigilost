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

public slots:
    void on_actualizarBtn_clicked();

    void delSearchTXT();

public:
    explicit ItemCreator(QWidget *parent = 0);
    ~ItemCreator();

private slots:
    void loadOnTable(QFile &file);
    void searchOnTable(QFile &file);
    void delTable();
    void checkRadios();

    void on_dataBuscar_textChanged(const QString &arg1);

    void on_actionAcerca_de_VigiLost_triggered();

    void on_radioPerdidos_clicked();

    void on_radioEncontrados_clicked();

private:
    Ui::ItemCreator *ui;
};

#endif // ITEMCREATOR_H
