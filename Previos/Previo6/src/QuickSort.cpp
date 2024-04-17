// Haciendo un sort de tipo Quick como se vio en clase, este en su primer paso va a acomodar los extremos.
#include <iostream>
using namespace std;

// Función para intercambiar dos elementos del array
void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

// Función para 'partir' el array en torno a un pivote
int partir(int arr[], int bajo, int alto){ // donde bajo es el índice más bajo del rango, y alto es el índice más alto
    int pivote = arr[alto]; // Se selecciona el último elemento como pivote
    int i = bajo - 1; // Índice del elemento más pequeño

    for (int j = bajo; j < alto; ++j){
        if (arr[j] <= pivote) {
            i++;
            swap(arr[i], arr[j]); // Se intercambian los elementos si el actual es menor o igual al pivote
        }
    }
    swap(arr[i + 1], arr[alto]); // Se coloca el pivote en su posición correcta
    return i + 1; // Se retorna la posición del pivote
}

// Función para el algoritmo QuickSort
void QuickSort(int arr[], int bajo, int alto){
    if (bajo < alto){
        int indicePivote = partir(arr, bajo, alto); // Se parte el array y se obtiene el índice del pivote

        // Se ordenan recursivamente las sub-arrays antes y después del pivote
        QuickSort(arr, bajo, indicePivote - 1);
        QuickSort(arr, indicePivote + 1, alto);
    }
}

// Función para imprimir el array
void Imprimir(int arr[], int size){
    for(int i = 0; i < size; ++i) {
        cout << arr[i] << " "; // Se imprime cada elemento del array
    }
    cout << endl; // Se imprime un salto de línea al final
}

// Función principal del programa
int main(){
    int datos[] = {12, 45, 66, 1, 20, 99, 7, 69}; // Array de datos
    int size = sizeof(datos) / sizeof(datos[0]); // Tamaño del array

    cout << "Array antes de aplicar QuickSort: ";
    Imprimir(datos, size); // Se imprime el array antes de ordenarlo

    QuickSort(datos, 0, size - 1); // Se llama a la función QuickSort para ordenar el array

    cout << "Array después de aplicar QuickSort: ";
    Imprimir(datos, size); // Se imprime el array después de ordenarlo

    return 0; // Indica que el programa finalizó correctamente
}
