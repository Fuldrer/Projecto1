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
    cout<<"--------Crear Disco--------"<<endl;
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
    char*n = new char();
    strcpy(n,nombre.c_str());
    //char * apt = new char[];
    ofstream creacion(nombre,ios::out|ios::binary);
   //creacion.open(n,ios::out|ios::binary);
    //creacion<<"hola";
    creacion.seekp(0,ios::beg);
    char*bitmap = new char[data.bm_size];
    for(int x = 0;x<canEntradas;x++){
        FAT fat;
        creacion.write(reinterpret_cast<char*>(&fat),52);
    }
    creacion.seekp(ios::end);
    creacion.write(bitmap,data.bm_size);
    creacion.seekp(ios::end);
    for(int x = 0;x<canBloques;x++){
        Data_Block block;
        creacion.write(reinterpret_cast<char*>(&block),1020);
    }
    creacion.close();

}

