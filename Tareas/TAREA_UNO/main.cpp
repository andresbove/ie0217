#include <iostream>
#include <string>
#include "verificacion.cpp"
#include <cstdlib> // Para utilizar la función rand()
#include <ctime>   // Para inicializar la semilla de generación de números aleatorios

int main() 
{
   // Array de palabras
    std::string palabras[] = {"hola", "adios", "bienvenido", "programacion", "computadora"};

    // Inicializar la semilla del generador de números aleatorios
    std::srand(std::time(0));

    // Seleccionar una palabra aleatoria del array
    std::string palabra = palabras[std::rand() % (sizeof(palabras) / sizeof(palabras[0]))];

    verificacion(palabra);
    return 0;
}
