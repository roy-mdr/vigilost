#include "files.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //ItemCreator w;
    //w.show();

    ItemCreator *wIC = ItemCreator::getInstanceIC();
    wIC->setWindowIcon(QIcon(":vigiServer.png"));
    wIC->show();

    return a.exec();
}
