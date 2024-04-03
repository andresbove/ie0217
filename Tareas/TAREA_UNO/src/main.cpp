/**
 * @file main.cpp. 
 *
 * @brief Programa principal
 */


#include "header.hpp"

// Función para seleccionar una palabra aleatoria y llamar a la función "verificacion"

int main() {
    /**
     * @brief Array predefinido que funcionará como diccionario
     */
    std::string palabras[] = {"hola", "adios", "bateria", "guitarras", "bajos", "voz", "avenida"}; //Este array se puede modificar
    
    // Acá se calcula la longitud del array de palabras
    int longitud = sizeof(palabras) / sizeof(palabras[0]);

     /**
     * @brief Se establece un ciclo que correrá hasta un 'break' para el menú.
     */
    
    while (true) {
        std::cout << "\nMenu:" << std::endl;
        std::cout << "1. Elegir la dificultad del juego (numero de intentos)." << std::endl;
        std::cout << "2. Iniciar el juego." << std::endl;
        std::cout << "3. Agregar palabras al arreglo de palabras que se escogen aleatoriamente." << std::endl;
        std::cout << "4. Ver diccionario de palabras." << std::endl;
        std::cout << "5. Salir del programa." << std::endl;
        std::cout << "Ingrese su opcion (1-5): ";
        
        int opcion;  // Se define 'opcion' para usarlo en los 'switch cases'
        std::cin >> opcion;  // Se guarda la entrada el usuario en la variable 'opcion'

    /**
     * @brief Se usan los 'switch cases' para definir las diferentes opciones del menú. Acá cada caso llama a una función. 
     * @see elegirDificultad()
     * @see inicializacion()
     * @see agregarPalabra()
     * @see verDiccionario()
     * @param intentos es una entero para ver la cantidad de intentos que quedan
     * @param palabras es el array diccionario
     * @param longitud tamaño del array
     */
        switch (opcion) {
            case 1:
                elegirDificultad(intentos);  //Se llama a la función 'elegirDificultad'
                break;
            case 2:
                inicializacion(palabras, longitud);  //Se llama a la función 'inicializacion'
                break;
            case 3:
                agregarPalabra(palabras, longitud);  //Se llama a la función 'agregarPalabra'
                break;
            case 4:
                verDiccionario(palabras, longitud);  //Se llama a la función 'verDiccionario'
                break;
            case 5:
                std::cout << "Juego Cerrado" << std::endl;
                return 0;
            default:
                std::cout << "Opcion no valida. Por favor, ingrese una opcion valida." << std::endl;
                break;
        }
    }

    return 0;
}