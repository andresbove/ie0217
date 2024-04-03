   /**
* @brief Se establece la funcion verDiccionario 
* @param intentos intentos disponibles
* Esta funcion le muestra al usuario las palabras con las que puede jugar
*/

#include "header.hpp"
void verDiccionario(const std::string palabras[], int longitud) {
    std::cout << "Diccionario de palabras:" << std::endl;
    for (int i = 0; i < longitud; ++i) { // Se recorre el array de palabras
        std::cout << palabras[i] << std::endl;
    }

}