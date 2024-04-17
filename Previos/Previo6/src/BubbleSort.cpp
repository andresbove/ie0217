// Inicio del programa: Haciendo un sort de tipo Bubble como se vio en clase
#include <iostream> // Librería para entrada/salida estándar
using namespace std; // Espacio de nombres estándar

// Función para ordenar un array usando Bubble Sort
void BubbleSort (int array[],int size){

    // Loop para acceder a cada elemento del array
    for (int paso = 0; paso < size; ++paso){
        // Otro loop para comparar los elementos dentro del array.
        // Notar que el primer loop es para acceder a los elementos, con estos no se hace nada
        for(int i = 0; i < size - paso -1; ++i){
            // Se comparan dos elementos dentro del array.
            // Si se desea ordenar de forma descendiente, se debe cambiar el '>' por un '<'.
            if (array[i] > array [i+1]){
                // Se procede a cambiar los elementos si no están en el orden deseado.
                int temp = array [i]; // Se guarda el valor actual de en temp.
                array[i] = array[i+1]; // Se asigna el valor siguiente al anterior
                array[i+1] = temp; // Se asigna el valor guardado en temp a al valor siguiente
            }
        }
    }
}

// Función para imprimir el array
void Imprimir(int array[], int size){
    for (int i= 0; i < size; ++i){
        cout<<" "<<array[i]; // Se imprime cada elemento del array.
    }
    cout << "\n"; // Se imprime un salto de línea al final.
}

// Función principal del programa
int main() {
    int datos []= {1000,-123,-3901238,123443,9883,1092}; // Array de datos
    int size = sizeof(datos)/ sizeof(datos[0]); // Se calcula el tamaño del array

    BubbleSort(datos,size); // Se llama a la función BubbleSort para ordenar el array

    cout << "Array Ordenado de Manera Ascendente: \n"; // Se imprime un mensaje indicando el orden del array
    Imprimir(datos,size); // Se llama a la función Imprimir para imprimir el array ordenado
}
