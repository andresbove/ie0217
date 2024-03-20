#include <iostream> // Se incluye la biblioteca 'iostream' en el header para imprimir mensajes en pantalla q
using namespace std; // 

int main () {
int num_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Se crea un array vacío y se define
 
for (int n: num_array) { // Se crea una variable tipo entero que se le asignarán los valores del array por iteración.
    cout << n << " "; // Se imprime el valor de la variable y un espacio vacío.

 }

return 0;

}