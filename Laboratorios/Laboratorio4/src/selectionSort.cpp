#include "header.hpp"

// Función para ordenar un arreglo usando el algoritmo Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) { // Recorriendo el arreglo desde el principio
        int min_index = i;
        for (int j = i + 1; j < n; ++j) { // Buscando el elemento mínimo en el resto del arreglo
            if (arr[j] < arr[min_index]) { // Si encontramos un elemento menor, lo marcamos como mínimo
                min_index = j;
            }
        }
        // Intercambiamos el elemento actual con el mínimo encontrado
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}
