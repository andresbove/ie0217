#include "header.hpp"

// Función auxiliar para la partición en el algoritmo Quick Sort
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) { // Si encontramos un elemento menor que el pivote, lo movemos hacia la izquierda
            ++i;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // Colocamos el pivote en su posición correcta
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

