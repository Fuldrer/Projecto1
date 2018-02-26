//
// Created by Carlos Molina on 2/9/2018.
//
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include "Metadata.h"
#include "FAT.h"
#include "Data_Block.h"
#include <fstream>

using namespace std;

#ifndef PROJECTO_1_DISCO_H
#define PROJECTO_1_DISCO_H


class Disco {
public:
    Metadata data;
    void abrir();
    void crear();
    void cerrar();

};


#endif //PROJECTO_1_DISCO_H
