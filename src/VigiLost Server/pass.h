#ifndef PASS_H
#define PASS_H

#include <QDialog>

namespace Ui {
class pass;
}

class pass : public QDialog
{
    Q_OBJECT

public:
    explicit pass(QWidget *parent = 0);
    ~pass();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::pass *ui;
};

#endif // PASS_H
