#include<iostream>
#include <cstdlib> // Incluir la biblioteca para utilizar malloc, realloc y free
using namespace std;

int main(){
    float *ptr, *new_ptr; // Declaración de punteros a flotantes
    ptr = (float*) malloc (5 * sizeof(float)); // Asignación de memoria dinámica para un bloque de 5 elementos flotantes

    // Comprobación de si la asignación de memoria fue exitosa
    if(ptr == NULL){
        cout << "Memory Allocation failed"; // Imprimir mensaje de error si falla la asignación
        exit(1); // Salir del programa con un código de error
    }

    // Inicialización del bloque de memoria asignado
    for(int i = 0; i < 5; i++){
        ptr[i] = i * 1.5; // Asignar valores al bloque de memoria
    }

    // Reasignación de memoria
    new_ptr = (float*) realloc(ptr, 10 * sizeof(float)); // Reasignar memoria para un bloque de 10 elementos flotantes

    // Comprobación de si la reasignación de memoria fue exitosa
    if (new_ptr == NULL){
        cout << "Memory Re-allocation Failed"; // Imprimir mensaje de error si falla la reasignación
        exit(1); // Salir del programa con un código de error
    }

    // Inicialización del bloque de memoria reasignado
    for (int i = 5; i < 10; i++){
        new_ptr[i] = i * 2.5; // Asignar valores al bloque de memoria reasignado
    }

    cout << "Printing Values" << endl;

    // Mostrar los valores almacenados en el bloque de memoria reasignado
    for (int i = 0; i < 10; i++){
        cout << new_ptr[i] << endl; // Imprimir cada valor del bloque de memoria reasignado
    }

    free(new_ptr); // Liberar la memoria asignada dinámicamente

    return 0;
}
