#include "header.hpp"
using namespace std;

class Molde { // Se define la clase principal

public: // Especificador de acceso

// Se definen los atributos
double largo;
double ancho;
double altura;
// Se termina de definir los atributos


Molde(){ // Inicializador de la clase. El CONSTRUCTOR.
cout << "Esto se ejecuta en cada instanciacion" << endl;
cout << "Iniciando un objeto de la clase Room" << endl;

}
// Funciones definidos en la clase son conocidos como METODOS.

double calcularArea() { // Metodo de calcular area
return largo * ancho;

}

double calcularvolumen() { // Metodo de calcular volumen
return largo * ancho * altura;
}
};

int main(){

// Se define una variable 'pared' tipo 'molde'
// Esto es INSTANCIAR.
// Con esta variable tipo 'molde' se puede acceder a los miembros(atributos) de la clase
Molde pared; //se ejecuta la linea 15
pared.largo = 408.5;
pared.ancho =-20.8;
pared.altura/=-315.2;


cout << "Area = " << pared.calcularArea() << endl;
cout << "Volumen = " << pared.calcularvolumen() << endl;

return 0;

}