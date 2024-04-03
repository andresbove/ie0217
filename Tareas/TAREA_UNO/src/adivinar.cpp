#include "header.hpp"

bool adivinar(const std::string& palabra) {
    char caracterABuscar;
    std::cout << "Ingrese un caracter: ";
    std::cin >> caracterABuscar;

    bool encontrado = false;

    // Bucle for para recorrer cada caracter de la palabra
    for (size_t i = 0; i < palabra.length(); ++i) 
    {
        if (palabra[i] == caracterABuscar) 
        {
            encontrado = true;
            break; // Si se encuentra el caracter, salimos del bucle
        }
    }

    return encontrado;
}