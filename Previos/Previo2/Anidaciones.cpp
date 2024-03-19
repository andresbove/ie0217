#include <iostream> // Se incluye la biblioteca 'iostream' como encabezado para interactuar con la entrada y salida
using namespace std; // Linea para abreviar las impresiones en consola.


int main() { // Funcion principal
int num; // Se crea una variable de tipo entero
cout << "Ingrese un entero: "; // Se le dice al usuario que ingrese un numero entero
cin >> num; // Se guarda el entero que ingresa el usuario en 'num'

if (num != 0) // Se compara si el entero es diferente a 0
{
    // outer if condition
    if (num > 0) // Si el entero es mayor que 0
        // Si se cumple la condición
        {cout << "El numero es positivo." << endl;} // Se imprime un mensaje positivo la usuario
    else // Si no se cumple la condicion
        {cout << "El numero es negativo." << endl;}  // Se imprime un mensaje negativo la usuario
}

else // Si no es diferente de 0
{
    cout << "El numero es 0." << endl; // Se imprime un mensaje al usuario
}
return 0;
}