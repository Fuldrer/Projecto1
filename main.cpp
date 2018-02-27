#include <iostream>
#include "Data_Block.h"
#include "FAT.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "Disco.h"
#include "Menus.h"

using namespace std;

int main() {
    Menus menu;
    menu.menu1();
    /*ifstream prueba;
    filebuf *pbuf;
    long size;
    char * buffer;
    prueba.open("Kia.png",ios::in|ios::binary);
    ofstream prueba2;
    prueba2.open("Kia2.png",ios::out|ios::binary);
    pbuf=prueba.rdbuf();

    // get file size using buffer's members
    size=pbuf->pubseekoff (0,ios::end,ios::in);
    pbuf->pubseekpos (0,ios::in);

    // allocate memory to contain file data
    buffer=new char[size];

    // get file data
    pbuf->sgetn (buffer,size);

    prueba.close();

    // write content to Jashnebahaara1.mp3

    prueba2.write(buffer,size);
    prueba2.close();*/
    std::cout << "Hello, World!" << std::endl;
    return 0;
}