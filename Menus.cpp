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
    cout<<"----------------Creacion de Disco----------------"<<endl;
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
    int opcion;
    cout<<"Eliga una Opcion"<<endl;
    cin>>opcion;
    switch (opcion){
        case 1:
            menu4();
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
    }

}

void Menus::menu4() {
    cout<<"Disco:Nombre";
    cout<<"Directorio:Nombre directorio";
    cout<<"-------Creacion Directorio-------"<<endl;
    cout<<"Ingrese Nombre:";

}

void Menus::menu5() {

}
