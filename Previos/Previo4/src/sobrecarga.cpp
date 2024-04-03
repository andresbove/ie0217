#include "header.hpp"
using namespace std;

// Se define la clase funcino
class Fraccion {
int numerador, denominador;

// Se define Constructor
public:
Fraccion(int n, int d): numerador (n), denominador(d) {}

// Operador al que se quiere sobrecargar
Fraccion operator+ (const Fraccion &f) {
Fraccion resultado( // variable resultado de tipo FRACCION
    numerador * f.denominador + f.numerador * denominador * f.denominador,
    denominador * f.denominador // Se define la suma de fracciones clasica
);
return resultado;
}
 void imprimir() {
cout << numerador << "/" << denominador << endl;
}
};


int main() { 
Fraccion f1(1, 2);
Fraccion f2(3, 4);
Fraccion f3 = f1 + f2;
f3.imprimir();
return 0;
}