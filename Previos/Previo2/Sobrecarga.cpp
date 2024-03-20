//Programa para calcular el valor absoluto
// Se definen dos funciones, una para numeros enteros y otra para flotantes
#include <iostream>
using namespace std;
// Se define una funcion con una variable flotante
float absolute(float var){
if (var < 0.0) // Se revisa si la variable es menor que 0.0
var = -var; // Si lo es, se le cambia el signo
return var;
}

// Se define una funcion con una variable entera
int absolute(int var) {
if (var < 0) // Se revisa si la variable es menor que 0.0
var = -var; // Si lo es, se le cambia el signo
return var;
}

int main() {
// Se llaman las funciones para el entero
cout << "Absolute value of -5 = " << absolute(-5) << endl;
// Se llaman las funciones para el flotante
cout << "Absolute value of 5.5 = " << absolute(5.5f) << endl; return 0;
}