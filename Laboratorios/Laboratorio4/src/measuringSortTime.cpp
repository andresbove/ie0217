#include "header.hpp"

// Función para medir el tiempo de ejecución de un algoritmo de ordenamiento
void measuringSortTime (void (*sortingAlgorithm)(int[], int), int arr[], int n, string algorithmName){
    high_resolution_clock::time_point start = high_resolution_clock::now(); // Momento de inicio
    sortingAlgorithm(arr, n); // Llamada al algoritmo de ordenamiento
    high_resolution_clock::time_point stop = high_resolution_clock::now(); // Momento de finalización
    std::chrono::microseconds duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start); // Duración en microsegundos
    cout << "Tiempo de " << algorithmName << ": " << duration.count() << " microsegundos" << endl; // Imprimimos el tiempo transcurrido
}
