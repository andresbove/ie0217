#include "header.hpp"

int main() {
    const int SIZE = 10000;
    int arr[SIZE];
    generateRandomArray(arr, SIZE); // Generamos un arreglo de números aleatorios
    measuringSortTime(bubbleSort, arr, SIZE, "Bubble Sort"); // Medimos el tiempo de ejecución del Bubble Sort
    
    generateRandomArray(arr, SIZE); // Generamos un arreglo de números aleatorios
    measuringSortTime(selectionSort, arr, SIZE, "Selection Sort"); // Medimos el tiempo de ejecución del Selection Sort
    
    generateRandomArray(arr, SIZE); // Generamos un arreglo de números aleatorios
    measuringSortTime(insertionSort, arr, SIZE, "Insertion Sort"); // Medimos el tiempo de ejecución del Insertion Sort
    
    generateRandomArray(arr, SIZE); // Generamos un arreglo de números aleatorios
    measuringQuickSortTime(quickSort, arr, 0, SIZE - 1, "Quick Sort");
    return 0;
}