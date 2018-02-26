//
// Created by Carlos Molina on 2/8/2018.
//

#include "Menus.h"
#include "Disco.h"

void Menus::menu1() {
    cout<<"Que desea hacer?"<<endl;
    cout<<"1.Crear Disco"<<endl;
    cout<<"2.Utilizar Disco Existente"<<endl;
    cout<<"3.Salir"<<endl;
    int opcion;
    cin>>opcion;
    switch (opcion){
        case 1:
            menu2();
            break;
        case 2:
            menu3();
            break;
        case 3:
            break;
    }

}

void Menus::menu2() {
    /*cout<<"----------------Creacion de Disco----------------"<<endl;
    cout<<"Ingrese nombre del disco:";
    string nombre_disk;
    cin>>nombre_disk;
    cout<<"1.1)Ingrese cantidad de Entradas:";
    int cant_ent;
    cin>>cant_ent;
    cout<<"1.2)Ingrese cantidad de bloques:";
    int cant_block;
    cin>>cant_block;*/
    Disco disk;
    disk.crear();
    menu3();
}

void Menus::menu3() {
    cout<<"Nombre:";
    cout<<"Espacio disponible:"<<endl;
    cout<<"Directorio actual";
    cout<<"2.1)Crear Directorio"<<endl;
    cout<<"2.2)Cambiar Directorio"<<endl;
    cout<<"2.3)Listar Directorio"<<endl;
    cout<<"2.4)Eliminar Directorio/Archivo "<<endl;
    cout<<"2.5)Importar Archivo"<<endl;
    cout<<"2.6)Exportar Archivo"<<endl;
    cout<<"2.7)Regresar"<<endl;

}

void Menus::menu4() {
    cout<<"Disco:Nombre";
    cout<<"Directorio:Nombre directorio";
    cout<<"-------Creacion Directorio-------"<<endl;
    cout<<"Ingrese Nombre:";

}

void Menus::menu5() {

}
