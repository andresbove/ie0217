/**
* @brief Se establece la funcion agregarPalabra 
* @param palabras array de palabras predefinido
* Esta funcion le pide al usuario la cantidad de intentos que desea utilizar
*/

#include "header.hpp"
void agregarPalabra(std::string palabras[], int& longitud) {
    std::string nuevaPalabra;
    std::cout << "Ingrese la nueva palabra: ";
    std::cin >> nuevaPalabra;
    
    palabras[longitud] = nuevaPalabra;
    longitud++;
}