#include "header.hpp"

// Función para seleccionar una palabra aleatoria y llamar a la función "verificacion"

int main() {
    // Array de palabras
    std::string palabras[] = {"hola", "adios", "bateria", "guitarra", "bajo", "voz", "avenida"};
    
    // Calcular la longitud del array de palabras
    int longitud = sizeof(palabras) / sizeof(palabras[0]);

    // Llamar a la función para seleccionar una palabra aleatoria y verificarla
    int intentos = 3; // Dificultad por defecto
    
    while (true) {
        std::cout << "\nMenú:" << std::endl;
        std::cout << "1. Elegir la dificultad del juego (número de intentos)." << std::endl;
        std::cout << "2. Iniciar el juego." << std::endl;
        std::cout << "3. Agregar palabras al arreglo de palabras que se escogen aleatoriamente." << std::endl;
        std::cout << "4. Ver diccionario de palabras." << std::endl;
        std::cout << "5. Salir del programa." << std::endl;
        std::cout << "Ingrese su opción: ";

        int opcion;
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                elegirDificultad(intentos);
                break;
            case 2:
                inicializacion(palabras, longitud);
                break;
            case 3:
                agregarPalabra(palabras, longitud);
                break;
            case 4:
                verDiccionario(palabras, longitud);
                break;
            case 5:
                std::cout << "¡Hasta luego!" << std::endl;
                return 0;
            default:
                std::cout << "Opción no válida. Por favor, ingrese una opción válida." << std::endl;
                break;
        }
    }

    return 0;
}