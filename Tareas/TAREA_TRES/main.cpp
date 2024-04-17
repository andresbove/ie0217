#include <iostream>
#include <cstring>

struct Contacto {
    char nombre[50];
    char telefono[20];
    Contacto* siguiente;
};

const int TAM_TABLA_HASH = 100;

class HashTable {
private:
    Contacto* tabla[TAM_TABLA_HASH];

    int hash(const char* str) {
        int hashVal = 0;
        while (*str != '\0') {
            hashVal = (hashVal * 31 + *str) % TAM_TABLA_HASH;
            str++;
        }
        return hashVal;
    }

public:
    HashTable() {
        for (int i = 0; i < TAM_TABLA_HASH; ++i) {
            tabla[i] = nullptr;
        }
    }

    void agregarContacto(const char* nombre, const char* telefono) {
        int indice = hash(nombre);
        
        Contacto* nuevoContacto = new Contacto;
        strcpy(nuevoContacto->nombre, nombre);
        strcpy(nuevoContacto->telefono, telefono);
        nuevoContacto->siguiente = nullptr;
        
        if (tabla[indice] == nullptr) {
            tabla[indice] = nuevoContacto;
        } else {
            Contacto* actual = tabla[indice];
            while (actual->siguiente != nullptr) {
                actual = actual->siguiente;
            }
            actual->siguiente = nuevoContacto;
        }
    }

    void eliminarContacto(const char* nombre) {
        int indice = hash(nombre);
        Contacto* actual = tabla[indice];
        Contacto* anterior = nullptr;
        
        while (actual != nullptr) {
            if (strcmp(actual->nombre, nombre) == 0) {
                if (anterior == nullptr) {
                    tabla[indice] = actual->siguiente;
                } else {
                    anterior->siguiente = actual->siguiente;
                }
                delete actual;
                return;
            }
            anterior = actual;
            actual = actual->siguiente;
        }
    }

    void imprimirTablaHash() {
        std::cout << "\nTabla Hash:\n";
        for (int i = 0; i < TAM_TABLA_HASH; ++i) {
            std::cout << "Key " << i << ": ";
            Contacto* actual = tabla[i];
            while (actual != nullptr) {
                std::cout << "(" << actual->nombre << ", " << actual->telefono << ") -> ";
                actual = actual->siguiente;
            }
            std::cout << "NULL\n";
        }
    }
};

int main() {
    HashTable agenda;
    char opcion;
    
    do {
        std::cout << "\nSeleccione una opción:\n";
        std::cout << "1. Agregar contacto\n";
        std::cout << "2. Eliminar contacto\n";
        std::cout << "3. Imprimir Hash-Table y Listas Enlazadas\n";
        std::cout << "4. Salir\n";
        std::cin >> opcion;
        
        switch (opcion) {
            case '1': {
                char nombre[50], telefono[20];
                std::cout << "Ingrese el nombre del contacto: ";
                std::cin >> nombre;
                std::cout << "Ingrese el numero de telefono: ";
                std::cin >> telefono;
                agenda.agregarContacto(nombre, telefono);
                break;
            }
            case '2': {
                char nombre[50];
                std::cout << "Ingrese el nombre del contacto a eliminar: ";
                std::cin >> nombre;
                agenda.eliminarContacto(nombre);
                break;
            }
            case '3':
                agenda.imprimirTablaHash();
                break;
            case '4':
                std::cout << "Saliendo del programa.\n";
                break;
            default:
                std::cout << "Opción inválida. Por favor, seleccione nuevamente.\n";
                break;
        }
    } while (opcion != '4');
    
    return 0;
}
