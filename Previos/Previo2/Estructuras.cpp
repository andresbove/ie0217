#include <iostream> 
using namespace std;

// Se define la estructura de "Persona"
struct Persona
{
char nombre[50];
int edad;
float salary;
};

int main()
{
Persona p1;

cout << "Ingrese su nombre: ";
cin.get(p1.nombre, 50);
cout<<"Ingrese su edad: ";
cin>> p1.edad;
cout << "Ingrese su salario: ";
cin>> p1.salary;
cout << "\nMostrando informacion" << endl;
cout << "nombre: " << p1.nombre << endl;
cout<<"edad: " << p1.edad << endl;
cout << "Salary: " << p1.salary;
return 0;
}