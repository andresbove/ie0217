#include <iostream> // Se incluye la biblioteca 'iostream' en el header para imprimir mensajes en pantalla
using namespace std; // Se utiliza esta linea para simplificar el uso de 'cout'


int main() {
int x; // Se crea la variable 'x' como entero
cout << "Escriba un numero: "; // Se le envia un mensaje al usuario con el operador de salida '<<', concatenado del 'cout'
cin >> x; // Se extrae la entrada del usuario con el operador de entrada '>>', concatenando el 'cin'
cout << "Su numero es: " << x; // Se concatenan las salidas 'Su numero es:' y 'x' con el operador de salida '<<'
}