// Haciendo un sort de tipo Insertion como se vio en clase, este en su primer paso va a acomodar los extremos.
#include <iostream>
using namespace std;

// Función para imprimir un array
void Imprimir(int array[], int size){
    for(int i = 0; i < size; i++){
        cout << array[i] << " "; // Imprime cada elemento del array seguido de un espacio
    }
    cout << endl; // Imprime un salto de línea al final
}

// Función para ordenar un array usando Insertion Sort
void insertionSort(int array[], int size){
    for(int paso = 1; paso < size; paso++){
        int key = array[paso]; // Guarda el valor del elemento actual en 'key'
        int j = paso - 1; // Inicializa 'j' con el índice del elemento anterior al actual

        // En este caso, se compara 'key' con los elementos a la izquierda del array
        // hasta que se encuentre un elemento menor o se llegue al inicio del array
        // Nuevamente, en orden ascendente.
        while(key < array[j] && j >= 0){
            array[j + 1] = array[j]; // Desplaza los elementos mayores hacia la derecha
            --j; // Decrementa 'j' para moverse a la izquierda
        }
        array[j + 1] = key; // Inserta 'key' en la posición correcta
    }
}

// Función principal que ejecuta todo el programa
int main(){
    int datos[] = {9, 5, 2, 1, 46}; // Array de datos a ordenar
    int size = sizeof(datos) / sizeof(datos[0]); // Calcula el tamaño del array

    insertionSort(datos, size); // Llama a la función insertionSort para ordenar el array

    cout << "Array ordenado en orden Ascendente: \n"; // Imprime un mensaje indicando el orden del array
    Imprimir(datos, size); // Llama a la función Imprimir para imprimir el array ordenado

    return 0; // Indica que el programa finalizó correctamente
}
