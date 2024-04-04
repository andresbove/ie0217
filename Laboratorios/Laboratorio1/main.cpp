#include <iostream> // Encabezado para incluir funciones para comunicarse con la computadora
#include "Contacto.hpp" // Se agrega el archivo de encabeado
#include "Funciones.hpp"

#define MAX_CONTACTOS 100
enum Opciones {
    AGREGAR = 1,
    MOSTRAR,
    BUSCAR,
    SALIR
};

int main() { // Función para empezar el programa principal
 Contacto listaContactos[MAX_CONTACTOS];
 int numContactos = 0;
 int opcion;
  do {
    std:: cout << "\nMenu\n";
    std:: cout << "1. Agregar Contacto\n";
    std:: cout << "2. Mostrar Contactos\n";
    std:: cout << "3. Buscar Contacto\n";
    std:: cout << "4. Salir\n;";
    std:: cout << "Ingrese su opcion\n";
    std:: cout << "\nMenu\n";
    switch (opcion){
        case AGREGAR:
        agregarContacto(listaContactos, numContactos);
        break;
        case MOSTRAR:
        mostrarContacto(listaContactos, numContactos);
        break;
        case BUSCAR:
        buscarContacto(listaContactos, numContactos);
        break;
        case SALIR:
        std:: cout << "saliendo del programa\n";
        default:
        std:: cout << "Opcion no valida\n";
        break;
    }
  } while (opcion != SALIR);
 
 return 0;
}