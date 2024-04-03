#include <iostream>
void agregarPalabra(std::string palabras[], int& longitud) {
    std::string nuevaPalabra;
    std::cout << "Ingrese la nueva palabra: ";
    std::cin >> nuevaPalabra;
    
    palabras[longitud] = nuevaPalabra;
    longitud++;
}