#include "header.hpp"


/**
* @brief Se establece la funcion 'inicializacion'
* @param longitud es el largo del array
* @param palabras es el string del diccionario
*/

void inicializacion(const std::string palabras[], int longitud) {
    // Se genera el valor aleatorio inicial
    std::srand(std::time(0));
    std::cout << "intentos disponibles: "<< intentos << std::endl; // Se imprimen los intentos disponibles
    // se elige una palabra aleatoria del array
    std::string palabra = palabras[std::rand() % longitud];
    // se llama a la función de verificación
    for (size_t i = 0; i < palabra.length(); ++i) { // se define un ciclo que recorra el array
            std::cout << "_";  // Se genera un string de '_' de la misma cantidad de caracteres de la plabra.
        }  
    verificacion(palabra); // Se llama a la funcion 'verificacion'
}
