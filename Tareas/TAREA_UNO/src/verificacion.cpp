#include "header.hpp"

/**
* @brief Se establece la funcion 'verificacion'
* Esta se encarara de ver si la palabra se esta adivinando o no
* @param  palabra es el diccionario ya definido de strings
*/



void verificacion(const std::string& palabra) {

    /**
* @brief Se establece dos contadores
* @param contador es para ver la cantidad de aciertos
* @param intentos2 es otro contador para ver cuantos fallos lleva el usuario
*/

    int contador = 0;
    int intentos2 = 0;

/**
* @brief Se establece un while para ver si la funcion booleana 'adivinar' es 'true'
Si no lo es, esta indica un mensaje de fallo
*/
    // Llamar a la función para buscar el caracter en la palabra
    while (true) {
        std::cout << std::endl;
        if (adivinar(palabra) == true) { //Si el resultado es 'true'
            std::cout << "Acierto. El caracter esta en la palabra." << std::endl;
            contador++; // Se le suma a 'contador'
        } else {  // Si es 'false'
            std::cout << "Fallo. El caracter no esta en la palabra. Intentelo de nuevo." << std::endl;
            intentos2++; // se le suma al otro contador
            std::cout << "Le quedan " << intentos - intentos2 << " intentos"<< std::endl; // Se imprimen los intentos restantes
        }
        if (intentos2 == intentos){ // Si la cantidad de intentos ejecutados es igual a los definidos por la dificultad, el juego para
            std::cout << "Perdio el juego" << std::endl;
            break;
        }
        if (contador == palabra.length()) {
            std::cout << "Palabra adivinada" << std::endl;
            std::cout << palabra << std::endl;
            break;
        }
    }
}