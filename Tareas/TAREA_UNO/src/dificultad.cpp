/**
* @brief Se establece la funcion elegirDificultad 
* @param intentos intentos disponibles
* Esta funcion le pide al usuario la cantidad de intentos que desea utilizar
*/

#include "header.hpp"

void elegirDificultad(int& intentos) {
    std::cout << "Ingrese el numero de intentos deseados: ";
    std::cin >> intentos;
}
