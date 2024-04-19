#include "header.hpp"


class HashTable {
private:
    Contacto* tabla[TAM_TABLA_HASH]; // Array de punteros a la lista de contactos

    // Función hash para obtener un índice basado en el nombre del contacto
    int hash(const char* str) {
        int hashVal = 0;
        while (*str != '\0') {
            hashVal = (hashVal * 31 + *str) % TAM_TABLA_HASH;
            str++;
        }
        return hashVal;
    }

public:
    // Constructor: inicializa la tabla hash con punteros nulos
    HashTable() {
        for (int i = 0; i < TAM_TABLA_HASH; ++i) {
            tabla[i] = nullptr;
        }
    }

    // Método para agregar un nuevo contacto a la tabla hash
    void agregarContacto(const char* nombre, const char* telefono) {
        int indice = hash(nombre); // Calcula el índice usando la función hash
        
        // Crea un nuevo contacto y establece sus datos
        Contacto* nuevoContacto = new Contacto;
        strcpy(nuevoContacto->nombre, nombre);
        strcpy(nuevoContacto->telefono, telefono);
        nuevoContacto->siguiente = nullptr;
        
        // Inserta el contacto en la lista correspondiente a su índice
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

    // Método para eliminar un contacto de la tabla hash
    void eliminarContacto(const char* nombre) {
        int indice = hash(nombre);
        Contacto* actual = tabla[indice];
        Contacto* anterior = nullptr;
        
        // Busca el contacto por nombre y lo elimina
        while (actual != nullptr) {
            if (strcmp(actual->nombre, nombre) == 0) {
                if (anterior == nullptr) {
                    tabla[indice] = actual->siguiente;
                } else {
                    anterior->siguiente = actual->siguiente;
                }
                delete actual; // Libera la memoria del contacto eliminado
                return;
            }
            anterior = actual;
            actual = actual->siguiente;
        }
    }

    // Método para imprimir la tabla hash (incluyendo las listas enlazadas)
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

    // Método para ordenar y mostrar todos los contactos por nombre
    void mostrarTodosLosContactos() {
        std::vector<Contacto*> listaContactos;

        // Recolecta todos los contactos de la tabla hash
        for (int i = 0; i < TAM_TABLA_HASH; ++i) {
            Contacto* actual = tabla[i];
            while (actual != nullptr) {
                listaContactos.push_back(actual);
                actual = actual->siguiente;
            }
        }

        // Ordena la lista de contactos por nombre usando std::sort
        std::sort(listaContactos.begin(), listaContactos.end(), [](Contacto* a, Contacto* b) {
            return strcmp(a->nombre, b->nombre) < 0;
        });

        // Imprime los contactos ordenados
        std::cout << "\nTodos los contactos almacenados:\n";
        for (const auto& contacto : listaContactos) {
            std::cout << "Nombre: " << contacto->nombre << ", Teléfono: " << contacto->telefono << '\n';
        }
    }
};
