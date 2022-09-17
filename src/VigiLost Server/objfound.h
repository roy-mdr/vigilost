#ifndef OBJFOUND_H
#define OBJFOUND_H

#include <QDialog>
#include <qmessagebox.h>

namespace Ui {
class objFound;
}

class objFound : public QDialog
{
    Q_OBJECT

public:
    explicit objFound(QWidget *parent = 0);
    ~objFound();

signals:
    void fData(QString, QString);

private slots:
    void on_buttonBox_accepted();

private:
    Ui::objFound *ui;
};

#endif // OBJFOUND_H
