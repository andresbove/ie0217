#ifndef TAREA3_HPP
#define TAREA3_HPP
#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

struct Contacto {
    char nombre[50]; // Nombre del contacto (hasta 50 caracteres)
    char telefono[20]; // Teléfono del contacto (hasta 20 caracteres)
    Contacto* siguiente; // Puntero al siguiente contacto en la lista (para manejo de colisiones)
};

const int TAM_TABLA_HASH = 100; // Tamaño de la tabla hash
#include "HashTable.cpp"
#endif //TAREA3_HPP