#ifndef AHORCADO_H
#define AHORCADO_H
#include <iostream>
#include <string>
#include <cstdlib> // Para utilizar la función rand()
#include <ctime>   // Para inicializar la semilla de generación de números aleatorios
#include "adivinar.cpp"
#include "verificacion.cpp"
#include "inicializacion.cpp"
#include "diccionario.cpp"
#include "dificultad.cpp"
#include "agregarPalabras.cpp"



using namespace std;
// Se define la estructura de "Ahorcado"
struct Ahorcado
{
    string palabra;       // La palabra a adivinar
    string estadoActual;          // El estado actual de la palabra adivinada
    int intentosPermitidos;       // El número máximo de intentos permitidos
    int intentosRealizados;       // El número actual de intentos realizados
};

#endif// AHORCADO_H