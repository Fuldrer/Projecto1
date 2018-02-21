//
// Created by Carlos Molina on 2/9/2018.
//

#include "Disco.h"
#include <string.h>

void Disco::abrir() {
     //Pedir nombre del disco y hacer fopen()
}

void Disco::cerrar() {
    //Hacer fclose al archivo abierto en ese momento  regresar al menu1

}

void Disco::crear() {
    //Pedir el nombre del archivo, cant de bloques y cant de entradas
    string nombre;
    int canEntradas,canBloques;
    cout<<"--------Crear Disco--------"
    cout<<"nombre"<<endl;
    cin>> nombre;
    cout<<"Ingrese cantidad de entradas: "<<endl;
    cin>>canEntradas;
    cout<<"Ingrese cantidad de bloques: "<<endl;
    cin>>canBloques;

    data.block_amount = canBloques;
    data.block_size = 1020;
    data.entry_amount = canEntradas;
    data.bm_size = canBloques/8;
    char*n;
    strcpy(n,nombre.c_str());
    char * apt = new char[];
    FILE *dat = new FILE(n);

    fopen(n,"wb+");
}

