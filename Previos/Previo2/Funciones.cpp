#include <iostream>
using namespace std;

void greet (){ //Se define una funcion sin retorno
    cout << "Hola Mundo desde la funcion." << endl; //Instruccion de la funcion
}


void mostrarNum(int n1, float n2){ //Se define una función que no retorna nada, con un entero y flotante como parametro
    cout << "El numero entero es: " << n1 << endl; //Se imprime el numero entero
    cout << "El numero flotante es: " << n2 << endl; //Se imprime el numero flotante

}


main (){
    greet(); //Se llama a la funcion desde el main
    int n1 = 5; //Se crea la variable entera y se le da un valor
    float n2 = 3.14; //Se crea la variable flotante y se le da un valor
    mostrarNum(n1, n2); // Se llama a la funcion con los numeros como parametros
    return 0;
}