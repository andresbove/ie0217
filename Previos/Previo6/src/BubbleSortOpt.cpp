// Haciendo un sort de tipo Bubble como se vio en clase
#include <iostream>
using namespace std;

// Función para ordenar un array usando Bubble Sort
void BubbleSort(int array[], int size){

    // Loop para acceder a cada elemento del array
    for (int paso = 0; paso < (size-1); ++paso) {
        int cambio = 0; // Variable para rastrear si se realizaron cambios durante este paso

        // Otro loop para comparar los elementos dentro del array.
        // Nota que el primer loop es para acceder a los elementos, no se hace nada con ellos.
        for (int i = 0; i < size - paso - 1; ++i) {
            // Se comparan dos elementos adyacentes dentro del array.
            // Si se desea ordenar de forma descendiente, se debe cambiar el '>' por un '<'.
            if (array[i] > array[i+1]) {
                // Se procede a cambiar los elementos si no están en el orden deseado.
                int temp = array[i]; // Se guarda el valor actual de array[i] en temp.
                array[i] = array[i+1]; // Se asigna el valor de array[i+1] a array[i].
                array[i+1] = temp; // Se asigna el valor guardado en temp a array[i+1].

                cambio = 1; // Se marca que se realizó un cambio en este paso
            }
        }

        // Si no hubo cambios en este paso, el array ya está ordenado y no es necesario continuar
        if (cambio == 0)
            break;
    }

}

// Función para imprimir el array
void Imprimir(int array[], int size){
    for (int i = 0; i < size; ++i) {
        cout << " " << array[i]; // Se imprime cada elemento del array.
    }
    cout << "\n"; // Se imprime un salto de línea al final.
}


int main() {
    int datos[] = {-2000001, -1023, 3901238, -3443, 983, 112092}; // Array de datos

    // Para encontrar el tamaño del array
    int size = sizeof(datos) / sizeof(datos[0]);

    // Llamada a la función BubbleSort para ordenar el array
    BubbleSort(datos, size);

    // Se imprime un mensaje indicando el orden del array
    cout << "Array Ordenado de Manera Ascendente: \n";

    // Llamada a la función Imprimir para imprimir el array ordenado
    Imprimir(datos, size);

    return 0; // Se indica que el programa finalizó correctamente
}