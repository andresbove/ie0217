#include <iostream> 

void verDiccionario(const std::string palabras[], int longitud) {
    std::cout << "Diccionario de palabras:" << std::endl;
    for (int i = 0; i < longitud; ++i) {
        std::cout << palabras[i] << std::endl;
    }

}