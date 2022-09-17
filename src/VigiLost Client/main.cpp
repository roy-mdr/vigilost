#include "files.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //ItemCreator w;
    //w.show();

    ItemCreator *wIC = new ItemCreator();
    wIC->setWindowIcon(QIcon(":vigiClient.png"));
    wIC->show();

    return a.exec();
}
