#include <iostream>
#include <string>
#include "verificacion.cpp"
#include <cstdlib> // Para utilizar la función rand()
#include <ctime>   // Para inicializar la semilla de generación de números aleatorios


void inicializacion(const std::string palabras[], int longitud) {
    // Inicializar la semilla del generador de números aleatorios
    std::srand(std::time(0));
    
    // Seleccionar una palabra aleatoria del array
    std::string palabra = palabras[std::rand() % longitud];
    // Llamar a la función de verificación
    for (size_t i = 0; i < palabra.length(); ++i) {
            std::cout << "_";
        }  
    verificacion(palabra);
}
