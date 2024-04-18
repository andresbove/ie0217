#include "header.hpp"

// Función para generar un arreglo de números aleatorios
void generateRandomArray(int arr[], int n) {
    srand(time(0)); // Inicializamos la semilla con la hora actual
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 1000; // Generamos números aleatorios entre 0 y 999
    }
}
