#include "header.hpp"

void measuringQuickSortTime (void (*sortingAlgorithm)(int[], int, int), int arr[], int low, int high, string algorithmName){
    high_resolution_clock::time_point start = high_resolution_clock::now(); // Momento de inicio
    sortingAlgorithm(arr, low, high); // Llamada al algoritmo de ordenamiento
    high_resolution_clock::time_point stop = high_resolution_clock::now(); // Momento de finalización
    std::chrono::microseconds duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start); // Duración en microsegundos
    cout << "Tiempo de " << algorithmName << ": " << duration.count() << " microsegundos" << endl; // Imprimimos el tiempo transcurrido
}
