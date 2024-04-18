#include "header.hpp"


// Función para ordenar un arreglo usando el algoritmo Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) { // Recorriendo el arreglo desde el principio
        for (int j = 0; j < n - i - 1; ++j) { // Comparando pares de elementos
            if (arr[j] > arr[j + 1]) { // Si el elemento actual es mayor que el siguiente, los intercambiamos
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
