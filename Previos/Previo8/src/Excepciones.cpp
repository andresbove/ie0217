#include <iostream>
using namespace std;

int main() {
    double numerator, denominator, result;

    // Solicitar el numerador
    cout << "Ingrese el numerador: ";
    cin >> numerator;

    // Solicitar el denominador
    cout << "Ingrese el denominador: ";
    cin >> denominator;

    try {
        // Lanza una excepción si el denominador es 0
        if (denominator == 0) {
            throw 0;
        }

        // Realizar la división si el denominador no es 0
        result = numerator / denominator;

        // Mostrar el resultado de la división
        cout << numerator << " / " << denominator << " = " << result << endl;
    }
    catch (int num_exception) {
        // Captura la excepción y muestra un mensaje de error
        cout << "Error: no se puede dividir entre " << num_exception << endl;

        return 0;
    }
}