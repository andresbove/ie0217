#include <iostream>
#include <string>

bool busqueda(const std::string& palabra) {
    char caracterABuscar;
    std::cout << "Ingrese un caracter: ";
    std::cin >> caracterABuscar;

    bool encontrado = false;

    // Bucle for para recorrer cada caracter de la palabra
    for (size_t i = 0; i < palabra.length(); ++i) 
    {
        if (palabra[i] == caracterABuscar) 
        {
            encontrado = true;
            break; // Si se encuentra el caracter, salimos del bucle
        }
    }

    return encontrado;
}

int main() {
int contador = 0;
std::string palabra = "hola";
for (size_t i = 0; i < palabra.length(); ++i) 
    {
          std::cout << "_" ;
    }  
 std::cout << std::endl;

    // Llamar a la función para buscar el caracter en la palabra
    while (true) 
    {
        if (busqueda(palabra) == true) 
        {
            std::cout << "El caracter esta presente en la palabra." << std::endl;
            contador++;
        } 
        else 
        {
            std::cout << "El caracter no esta presente en la palabra. Inténtelo de nuevo." << std::endl;
        }
        if (contador == palabra.length())
        {
            std::cout << "Palabra adivinada" << std::endl;
            std::cout << "hola" << std::endl;
            break;
        }

    }

    return 0;
}
