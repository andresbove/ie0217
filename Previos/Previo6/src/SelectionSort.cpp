// Haciendo un sort de tipo Selection como se vio en clase, este en su primer paso va a acomodar los extremos.
#include <iostream>
using namespace std;

// Función para cambiar la POSICIÓN de dos elementos
void swap(int* a, int* b){
    int temp = *a; // Se guarda el valor de 'a' en 'temp'
    *a = *b; // Se asigna el valor de 'b' a 'a'
    *b = temp; // Se asigna el valor guardado en 'temp' a 'b'
}

// Función para imprimir un array
// Se utilizan punteros, ya que se está hablando de posiciones
void Imprimir(int array[], int size){
    for (int i = 0; i < size; i++){
        cout << array[i] << " "; // Se imprime cada elemento del array seguido de un espacio
    }
    cout << endl; // Se imprime un salto de línea al final
}

// Función para ordenar un array usando Selection Sort
void SelectionSort(int array[], int size){
    for (int paso = 0; paso < size - 1; paso++){
        int min_idx = paso; // Se inicializa el índice del mínimo como el primer elemento no ordenado
        for (int i = paso + 1; i < size; i++){
            // En este loop, se selecciona el elemento mínimo. De manera similar a ambos códigos anteriores, se está
            // ordenando de modo ASCENDENTE. Si se quiere DESCENDENTE, se debe cambiar el '>' a '<' en la línea 25.
            if (array[i] < array[min_idx])
                min_idx = i; // Se actualiza el índice del mínimo si se encuentra un elemento menor
        }
        // Poniendo el número mínimo en la posición correcta
        swap(&array[min_idx], &array[paso]);
    }
}

// Función principal del programa
int main(){
    int datos[] = {-123, 34, 0, -32, 124}; // Array de datos a ordenar
    int size = sizeof(datos) / sizeof(datos[0]); // Tamaño del array

    SelectionSort(datos, size); // Llama a la función SelectionSort para ordenar el array

    cout << "Arreglo ordenado en orden ASCENDENTE: \n";
    Imprimir(datos, size); // Llama a la función Imprimir para imprimir el array ordenado

    return 0; // Indica que el programa finalizó correctamente
}
