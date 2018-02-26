//
// Created by Carlos Molina on 2/6/2018.
//

#ifndef PROJECTO_1_FAT_H
#define PROJECTO_1_FAT_H


struct FAT {
    char nombre;
    int tamano;
    char tipo;
    int padre;
    int primer_hijo;
    int hermano_derecho;
    int primer_bloque_data;
    bool libre;
};


#endif //PROJECTO_1_FAT_H
