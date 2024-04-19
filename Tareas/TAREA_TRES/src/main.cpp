#include "header.hpp"


int main() {
    HashTable agenda; // Crea una instancia de la tabla hash para almacenar contactos
    char opcion;
    
    do {
        // Muestra un menú con las opciones disponibles
        std::cout << "\nSeleccione una opción:\n";
        std::cout << "1. Agregar contacto\n";
        std::cout << "2. Eliminar contacto\n";
        std::cout << "3. Imprimir Hash-Table y Listas Enlazadas\n";
        std::cout << "4. Mostrar todos los contactos\n";
        std::cout << "5. Salir\n";
        std::cin >> opcion;
        
        switch (opcion) {
            case '1':
                char nombre[50], telefono[20];
                std::cout << "Ingrese el nombre del contacto: ";
                std::cin >> nombre;
                std::cout << "Ingrese el número de teléfono: ";
                std::cin >> telefono;
                agenda.agregarContacto(nombre, telefono);
                break;
            case '2':
                std::cout << "Ingrese el nombre del contacto a eliminar: ";
                std::cin >> nombre;
                agenda.eliminarContacto(nombre);
                break;
            case '3':
                agenda.imprimirTablaHash();
                break;
            case '4':
                agenda.mostrarTodosLosContactos();
                break;
            case '5':
                std::cout << "Saliendo del programa.\n";
                break;
            default:
                std::cout << "Opción inválida. Por favor, seleccione nuevamente.\n";
                break;
        }
    } while (opcion != '5');
    
    return 0;
}