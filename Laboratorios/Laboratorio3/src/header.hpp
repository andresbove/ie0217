#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP
#include <iostream> 
#include <string> 

// Archivo de encabezado donde se definen constantes y se incluye el archivo 'funciones.cpp'

using namespace std;
struct Libro { // estructura de 3 miembros tipicos
    string titulo;
    string autor;
    string genero;
    Libro* siguiente; // 4to miembro, es un puntero, de tipo libro - puntero
    // apunta a otra estructura, no a ella misma
};

enum opciones {
    AGREGAR_LIBRO = 1,
    MOSTRAR_LIBRO = 2,
    SALIR = 3,
    OPCIONES_MAX
};


#endif //FUNCIONES_HPP