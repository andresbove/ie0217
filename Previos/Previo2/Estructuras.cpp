#include <iostream> 
using namespace std;

// Se define la estructura de "Persona"
struct Persona
{
// Se ingresan los diferentes tipos de datos
char nombre[50]; //Se define nombre como una cadena de caracteres
int edad; //Se define edad como un entero
float salario; //Se define el salario como un flotante
};

int main()
{
Persona p1; // Se hace la reservacion de memoria para una instancia del struct

cout << "Ingrese su nombre: "; // Se imprime un mensaje al usuario
cin.get(p1.nombre, 50); //Se guarda el array de caracteres en la instancia de nombre de P1
cout<<"Ingrese su edad: "; // Se guarda el entero de la edad en la instancia de edad de P1
cin>> p1.edad; // Se guarda el entero de la edad en la instancia de edad de P1
cout << "Ingrese su salario: "; 
cin>> p1.salario; // Se guarda el flotante del salario en la instancia de edad de P1

// Se imprime la informacion con respecto a la instancia de cada variable
cout << "\nMostrando informacion" << endl;
cout << "nombre: " << p1.nombre << endl;
cout<<"edad: " << p1.edad << endl;
cout << "Salario: " << p1.salario;
return 0;
}