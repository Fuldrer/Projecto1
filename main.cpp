#include <iostream>
#include "Data_Block.h"
#include "FAT.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "Disco.h"

using namespace std;

int main() {

    Disco disc;
    disc.crear();
    /*ofstream escribir("disco.dat",ios::out|ios::binary);
    escribir<<"hola";
    escribir.close();*/
    std::cout << "Hello, World!" << std::endl;
    return 0;
}