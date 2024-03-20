
#include <iostream>
using namespace std; 
int add(int a, int b) // Se define la funcion 'add', con dos enteros como parametros
{ 
    return (a + b); // Retorna la suma de ambos numeros
}

int main() 
{
int sum; // Se crea una variable tipo entero
sum = add(100, 78); // Se llama a la funcion 'add' con enteros como parametros
// Se guarda el resultado de la suma en 'sum'
cout << "100 + 78 = " << sum << endl; // Se imprime la variable
return 0;
}