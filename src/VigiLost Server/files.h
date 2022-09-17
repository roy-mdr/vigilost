#ifndef FILES_H
#define FILES_H

#include <QFileDialog>
#include "itemcreator.h"
#include "objfoundform.h"

static QFile lf( "C:/.lostObj" );  //Direccion y nombre del archivo que contiene los objetos perdidos. (D:/Carpeta/archivo.ext) o (archivo.ext)

static QFile ff( "C:/.foundObj" );  //Direccion y nombre del archivo que contiene los objetos encontrados. (D:/Carpeta/archivo.ext) o (archivo.ext)

static QString passWord = "00admin" ;



//Ya no se usa porque ahora se crearon las ventanas tipo SINGLETON (sólo una instancia).
/*
static ItemCreator *wIC =  NULL; //inicializa SOLO UNA VEZ (porque no está en nunguna funcion) el objeto de ObjFoundForm como VACIO(NULL).
//void ObjFoundForm::on_lostBtn_clicked()
static void openLost()
{
    //Abrir ventana "ItemCreator":
    if(!wIC){ //Esto para evitar que se puedan abrir multiples ventanas.
        wIC = new ItemCreator(); //ObjFoundForm(this); para utilizar la ventana actual como contenedor, en lugar de la independiente del widget.
    }

    wIC->delSearchTXT();
    wIC->on_actualizarBtn_clicked(); //Se actualiza la tabla de objetos encontrados.
    wIC->show(); //Se muestra la ventana de la tabla.
    wIC->setWindowState(wIC->windowState() & ~Qt::WindowMinimized | Qt::WindowActive); //Si la ventana está minimizada, se maximiza.
    wIC->activateWindow(); //Se pone la ventana al frente.
}

static ObjFoundForm *wOFF = NULL; //inicializa SOLO UNA VEZ (porque no está en nunguna funcion) el objeto de ObjFoundForm como VACIO(NULL).
//void ItemCreator::on_foundBtn_clicked() //Al presionar "-Objetos Perdidos-":
static void openFound() //Al presionar "-Objetos Perdidos-":
{

    //Abrir ventana "objFoundForm":
    if(!wOFF){ //Esto para evitar que se puedan abrir multiples ventanas.
        wOFF = new ObjFoundForm(); //ObjFoundForm(this); para utilizar la ventana actual como contenedor, en lugar de la independiente del widget.
    }

    wOFF->delSearchTXT();
    wOFF->on_actualizarBtn_clicked(); //Se actualiza la tabla de objetos encontrados.
    wOFF->show(); //Se muestra la ventana de la tabla.
    wOFF->setWindowState(wOFF->windowState() & ~Qt::WindowMinimized | Qt::WindowActive); //Si la ventana está minimizada, se maximiza.
    wOFF->activateWindow(); //Se pone la ventana al frente.
}
*/


#endif // FILES_H
