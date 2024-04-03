#include "header.hpp"
using namespace std;
class Animal { // Se crea una clase llamada animal

public: // especificador de acceso publico
//inicio de metodos publicos
    void setEdad (int age) {
    edad = age;
    }

int getEdad() 
{return edad;}
//fin de metodos publicos

//metodos no publicos
protected:
string nombre;
private:
int edad;
};
//metodos no publicos


// Herencia de metodos
// Se toma la clase base 'Animal'. 
// Perro hereda metodos de la clase 'Animal'.
class Perro : public Animal {
public:
void setNombre (string n) { 
    nombre = n;
}
string getNombre() {
return nombre;
}
};


int main() { 
    Perro miPerro;

miPerro.setNombre ("Toby"); miPerro.setEdad (3);
cout << "Mi perro se llama" << miPerro.getNombre() << endl; 
cout << " y tiene " << miPerro.getEdad () << " años." << endl;
return 0;
}