#include<iostream>

// Variable global almacenada en el segmento de datos
int globalVariable = 42;

int main() {
    // Variable local almacenada en el stack
    int stackVariable = 10;

    // Variable dinámica almacenada en el heap
    int* heapVariable = new int(20);

    // Imprimir los valores de las variables
    std::cout << "Valor de globalVariable: " << globalVariable << std::endl; // Imprimir el valor de la variable global
    std::cout << "Valor de stackVariable: " << stackVariable << std::endl;   // Imprimir el valor de la variable en el stack
    std::cout << "Valor de heapVariable: " << heapVariable << std::endl;     // Imprimir la dirección de memoria de la variable en el heap

    // Liberar la memoria asignada en el heap
    delete heapVariable;

    return 0;
}
