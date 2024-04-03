#include <iostream> // Se incluye la biblioteca 'iostream' en el header para imprimir mensajes en pantalla

using namespace std; // Se utiliza esta linea para simplificar el uso de 'cout'

int main (){
    // Se crean variables 'locales' con respecto al 'main'
    int a, b; // Se crean las variables 'a' y 'b' como enteros
    int c; // Se crean la variable 'c' como entero

    // Se definen las variables anteriormente creadas
    a = 10;
    b = 10;
    c = a + b; // Se suman 'a' y 'b' y se guarda el resultado en 'c'.
    
    cout << c; // Se imprime la salida con 'cout', gracias a la libreria 'iostream'

    return 0;
}