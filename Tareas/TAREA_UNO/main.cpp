#include <iostream>
#include <string>
using namespace std;
int main() {
    std::string palabra = "hola";
    char caracterABuscar;
    cout << "Ingrese un caracter: ";
    cin >> caracterABuscar;
    bool encontrado = false;

    // Bucle for para recorrer cada caracter de la palabra
    for (size_t i = 0; i < palabra.length(); ++i) {
        if (palabra[i] == caracterABuscar) {
            encontrado = true;
            break; // Si se encuentra el caracter, salimos del bucle
        }
    }

    // Verificar si se encontró el caracter
    if (encontrado == true) {
        std::cout << "El caracter '" << caracterABuscar << "' esta presente en la palabra." << std::endl;
    } else {
        std::cout << "El caracter '" << caracterABuscar << "' no esta presente en la palabra." << std::endl;
    }

    return 0;
}
