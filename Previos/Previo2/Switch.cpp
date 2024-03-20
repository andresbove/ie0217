#include <iostream> // Se incluye la biblioteca 'iostream' como encabezado para interactuar con la entrada y salida
using namespace std; // Linea para abreviar las impresiones en consola.

int main (){ // Funcion principal
char oper; // Se crea una variable tipo 'char'
float num1, num2; // Se crean dos variables de tipo 'float'

// Se le imprime un mensaje al usurio indicando cuales operadores se pueden usar
cout << "Ingrese un operador para la calculadora ('+','-','*','/'):"<<endl; // Se concatena el string y el salto de linea
cin >> oper; // Se guarda lo que escribe el usuario en la variable 'oper'
cout << "Ingrese un dos números: "<<endl; // Se le imprime un mensaje al usuario indicándole que ingrese dos números y se concatena
// con un salto de linea
cin >> num1 >> num2; // se concatenan los dos numeros que ingresó el usuario

switch (oper){
    case '+': //caso 1
    cout << num1 << '+' << num2 << "=" <<num1 + num2;
    break;
    case '-'://caso 2
    cout << num1 << '-' << num2 << "=" <<num1 + num2;
    break;
    case '*'://caso 3
    cout << num1 << '*' << num2 << "=" <<num1 + num2;
    break;
    case '/'://caso 4
    cout << num1 << '/' << num2 << "=" <<num1 + num2;
    break;
    default:
    //el operador no hace match con ningun caso
    cout << "Error. Operador incorrecto";
    break; 
}
return 0;
} 