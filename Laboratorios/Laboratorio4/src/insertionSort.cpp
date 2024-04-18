#include "header.hpp"

// Función para ordenar un arreglo usando el algoritmo Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) { // Comenzamos desde el segundo elemento del arreglo
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) { // Desplazamos los elementos mayores hacia adelante
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key; // Insertamos el elemento en su posición correcta
    }
}
