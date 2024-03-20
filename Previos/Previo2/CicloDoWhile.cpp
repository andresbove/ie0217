#include <iostream>
using namespace std;

int main (){
 int i = 1; //Se crea una variable tipo entero y se define su valor
 do { // Se le ordena a la computadora
    cout << i << " "; //Imprimir el valor de la variable 'i' y un espacio vacio
    i++; // Sumarle +1 al valor almacenado en la variable
 }

while (i <= 5); // Siempre que se cumpla esta condicion

return 0;
}