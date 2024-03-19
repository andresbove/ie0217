#include <iostream> // Se incluye la biblioteca 'iostream' como encabezado para interactuar con la entrada y salida
using namespace std; // Linea para abreviar las impresiones en consola.

int main (){ // Funcion principal
char oper; // Se crea una variable tipo 'char'
float num1, num2; // Se crean dos variables de tipo 'float'

cout << "Ingrese un operador para la calculadora ('+','-','*','/'):"<<endl;
cin >> oper;
cout << "Ingrese un dos números: "<<endl;
cin >> num1 >> num2;

switch (oper){
    case '+':
    cout << num1 << '+' << num2 << "=" <<num1 + num2;
    break;
    case '-':
    cout << num1 << '-' << num2 << "=" <<num1 + num2;
    break;
    case '*':
    cout << num1 << '*' << num2 << "=" <<num1 + num2;
    break;
    case '/':
    cout << num1 << '/' << num2 << "=" <<num1 + num2;
    break;
    default:
    //el operador no hace match con ningun caso
    cout << "Error. Operador incorrecto";
    break; 
}
return 0;
} 