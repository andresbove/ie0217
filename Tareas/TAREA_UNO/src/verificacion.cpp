#include "header.hpp"

void verificacion(const std::string& palabra) {
    int contador = 0;

    // Llamar a la función para buscar el caracter en la palabra
    while (true) {
        std::cout << std::endl;
        if (adivinar(palabra) == true) {
            std::cout << "El caracter esta presente en la palabra." << std::endl;
            contador++;
        } else {
            std::cout << "El caracter no esta presente en la palabra. Inténtelo de nuevo." << std::endl;
        }
        if (contador == palabra.length()) {
            std::cout << "Palabra adivinada" << std::endl;
            std::cout << palabra << std::endl;
            break;
        }
    }
}