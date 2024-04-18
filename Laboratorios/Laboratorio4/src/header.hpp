#ifndef ORDENAMIENTO_HPP
#define ORDENAMIENTO_HPP
#include <iostream>
#include <cstdlib> // Librería para usar la función rand() y srand()
#include <ctime> // Librería para obtener la hora actual y usarla como semilla
#include <chrono> // Librería para medir el tiempo de ejecución de los algoritmos de ordenamiento
#include <string> // Librería para usar el tipo de dato string

using namespace std;
using namespace std::chrono;

#include "bubbleSort.cpp" // Librería para usar el tipo de dato string
#include "selectionSort.cpp" // Librería para usar el tipo de dato string
#include "insertionSort.cpp" // Librería para usar el tipo de dato string
#include "partition.cpp"
#include "quickSort.cpp"
#include "generateRandomArray.cpp"
#include "measuringSortTime.cpp"
#include "measuringQuickSortTime.cpp"


#endif //ORDENAMIENTO_HPP