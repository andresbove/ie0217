#include <iostream> // Se incluye la biblioteca 'iostream' en el header para imprimir mensajes en pantalla q
using namespace std; // 

int main () {
    int i = 1; // Se crea una variable tipo entero y se define su valor

    while ( i <= 5){ // Mientras ese valor sea menor que 5
        cout << i << " "; // Imprimir la variable y un espacio vacio
        ++i; // Sumarle +1 al valor de la variable
    }
return 0;
}