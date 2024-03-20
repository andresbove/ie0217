#include <iostream>
int main(int argc, char* argv[]) { 
    std::cout << "Número de argumentos: " << argc << std::endl; //Se imprime la cantidad de argumentos al ejecutar el programa 
    std::cout << "Nombre del programa:" << argv[0] << std::endl; // Se imprime la primer entrada del array, el nombre del programa
// Imprimir argumentos adicionales si existen
if (argc > 1) { // Si la cantidad de argumentos es mayor a 1
    std::cout << "Argumentos adicionales: " << std::endl; //Se imprimmen otros argumentos ingresados al ejecutar el programa
    for (int i = 1; i < argc; ++i) { //Para 'i' siendo menor que la cantidad total de argumentos ingresados
    std::cout << "argv[" << i <<"]: " << argv[i] << std::endl;} // Imprimir los siguientes argumentos. 
}
return 0;
}
