#ifndef FILES_H
#define FILES_H

#include <QFileDialog>
#include "itemcreator.h"

static QFile lf( "C:/.lostObj" );  //Direccion y nombre del archivo que contiene los objetos perdidos. (D:/Carpeta/archivo.ext) o (archivo.ext)

static QFile ff( "C:/.foundObj" );  //Direccion y nombre del archivo que contiene los objetos encontrados. (D:/Carpeta/archivo.ext) o (archivo.ext)

#endif // FILES_H
