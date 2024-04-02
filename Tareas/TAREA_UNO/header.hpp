#ifndef AHORCADO_H
#define AHORCADO_H


#include <string>
using namespace std;
// Se define la estructura de "Ahorcado"
struct Ahorcado
{
    string palabraAdivinar;       // La palabra a adivinar
    string estadoActual;          // El estado actual de la palabra adivinada
    int intentosPermitidos;       // El número máximo de intentos permitidos
    int intentosRealizados;       // El número actual de intentos realizados
};



#endif// AHORCADO_H