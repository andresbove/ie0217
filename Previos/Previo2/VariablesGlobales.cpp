#include <iostream> // Se incluye la biblioteca 'iostream' en el header para imprimir mensajes en pantalla
using namespace std; // Se utiliza esta linea para simplificar el uso de 'cout'


//Variables Globales
int g;  // Se crea la variable 'g' como entero. Esta se podrá usar donde sea porque se creó fuera del 'main'

int main (){
    // Se crean variables 'locales' con respecto al 'main'
    int a, b; // Se crean las variables 'a' y 'b' como enteros

    // Se definen las variables anteriormente creadas
    a = 10;
    b = 10;
    g = a + b; // Se suman 'a' y 'b' y se guarda el resultado en 'g', a pesar de que esta última no fue creada en el 'main'.
    
    cout << g; // Se imprime la salida con 'cout', gracias a la libreria 'iostream'

    return 0;
}