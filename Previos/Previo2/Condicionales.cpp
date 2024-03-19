#include <iostream> // Se incluye la biblioteca 'iostream' como encabezado para interactuar con la entrada y salida
using namespace std; // Linea para abreviar las impresiones en consola.

int main (){ // Funcion principal

int number = 5; // Se crea una variable y se define en la misma linea

if (number > 0){ // Se usa un condicional para ver si la variable es mayor a 0
    cout << "El numero es mayor a 0. "; // Se imprime un mensaje con un objeto de la libreria de entrada y salida
}

if (number < 0){ // Se usa un condicional para ver si la variable es menor a 0
    cout << "El numero es menor a 0. " << number; // Se imprime un mensaje con un objeto de la libreria de entrada y salida
}

int number2 = 0;
if (number2 == 0){ // Se usa un condicional para ver si la variable es igual a 0
    cout << "El numero es igual a 0. "; // Se imprime un mensaje con un objeto de la libreria de entrada y salida
}

else{
    cout << "El numero no es igual a 0. "; // Se imprime un mensaje con un objeto de la libreria de entrada y salida
}

return 0;

}
