/**
* @brief Se establece la funcion 'adivinar'
* Esta se encargara de ver si la palabra se esta adivinando o no
* @param  palabra es el diccionario ya definido de strings
*/

#include "header.hpp"

bool adivinar(const std::string& palabra) {
    char caracterABuscar;
    std::cout << "Ingrese un caracter: ";
    std::cin >> caracterABuscar;

    bool encontrado = false;

    // Bucle for para recorrer cada caracter de la palabra
    for (size_t i = 0; i < palabra.length(); ++i) 
    {
        if (palabra[i] == caracterABuscar)  // Si la entrada del array es igual al caracter ingresado
        {
            encontrado = true;  // Se cambia su estado a 'true'
            break; // Si se encuentra el caracter, salimos del bucle
        }
    }

    return encontrado;
}