#include "header.hpp"  // Se incluye el archivo "header.hpp"

int main() {  // Se estable el main
    srand(time(0)); 

    std::vector<Pais*> paises; // Vector donde se guardaran los paises ingresados

    Planeta planeta;

    int opcion;
    std::string nombre; // Declarar aquí la variable 'nombre'
    do {
        mostrarMenu(); // Inicio del menu
        std::cin >> opcion;
        switch (opcion) { // Dependendiendo de la opcion se va a alguno de los casos
            case 1:
                std::cout << "informacion de todos los paises:" << std::endl;
                for (int i = 0; i < paises.size(); ++i) {  // Se recocorre el array 'paises'
                    std::cout << "indice: " << i << std::endl; 
                    paises[i]->imprimirInformacion(); // Se llama a la funcion 'imprimirInformacion'
                    std::cout << std::endl;
                }
                break;
            case 2:
                int indice1, indice2; // Se definen dos variables
                std::cout << "Ingrese el indice del primer pais: "; // Se guarda un indice en una variable
                std::cin >> indice1; 
                std::cout << "Ingrese el indice del segundo pais: ";
                std::cin >> indice2; // Se guarda otro indice en la otra variable
                if (indice1 >= 0 && indice1 < paises.size() && indice2 >= 0 && indice2 < paises.size()) { // comparacion de los paises
                    if (*paises[indice1] == *paises[indice2]) {
                        std::cout << "Los dos paises son del mismo tipo." << std::endl;
                    } else {
                        std::cout << "Los dos paises no son del mismo tipo." << std::endl;
                    }
                } else {
                    std::cout << "indices inválidos." << std::endl;
                }
                break;
            case 3:
                int tipo, hab;
                bool tieneAeropuerto;
                std::cout << "Ingrese el tipo de pais (1 para Primer Mundo, 2 para En Desarrollo): ";
                std::cin >> tipo; // Definicion del tipo de paies
                std::cout << "Ingrese el nombre del pais: ";
                std::cin.ignore(); // Limpiar el buffer del teclado antes de getline
                std::getline(std::cin, nombre);
                std::cout << "Ingrese la cantidad de habitantes del pais: ";
                std::cin >> hab; 
                if (tipo == 1) { // Si es de tipo 1
                    PaisPrimerMundo* nuevoPais = new PaisPrimerMundo(nombre, hab); //Se pone como el pais nuevo al pais de primer mundo
                    bool tiene5G; // Se crea una variable booleana para la 5G
                    std::cout << "El pais tiene tecnologia 5G? (1 para Si, 0 para No): ";
                    std::cin >> tiene5G; // Se guarda el valor
                    nuevoPais->setTecnologia5G(tiene5G); // Se establece que tenga tecnologia 5G
                    std::cout << "El pais tiene aeropuerto? (1 para Si, 0 para No): ";
                    std::cin >> tieneAeropuerto; // Se guarda el estado de Aeropuerto
                    nuevoPais->setAeropuerto(tieneAeropuerto);  // Se establece que se tiene un Aeropuerto
                    paises.push_back(nuevoPais);
                } else if (tipo == 2) { // Si es un pais en desarollo
                    PaisEnDesarrollo* nuevoPais = new PaisEnDesarrollo(nombre, hab);
                    std::cout << "¿El pais tiene aeropuerto? (1 para Si, 0 para No): ";
                    std::cin >> tieneAeropuerto; // Se guarda el resultado de aeropuerto
                    nuevoPais->setAeropuerto(tieneAeropuerto);
                    paises.push_back(nuevoPais);
                } else {
                    std::cout << "Tipo de pais inválido." << std::endl;
                }
                break;
            case 4:
                int indiceEliminar; // Se usa el indice del pais para eliminarlo
                std::cout << "Ingrese el indice del pais que desea eliminar: ";
                std::cin >> indiceEliminar; // Se guarda el indice
                if (indiceEliminar >= 0 && indiceEliminar < paises.size()) { // Se busca el inidce en el vector de paises
                    delete paises[indiceEliminar]; // Se elimina el pais segun el indice
                    paises.erase(paises.begin() + indiceEliminar);
                    std::cout << "pais eliminado correctamente." << std::endl;
                } else {
                    std::cout << "indice inválido." << std::endl;
                }
                break;
            case 5:
                std::cout << "Saliendo del programa." << std::endl;
                break;
            default:
                std::cout << "opcion invalida. Por favor, seleccione una opcion valida." << std::endl;
                break;
        }
    } while (opcion != 5);

    // Limpiar memoria de los paises restantes
    for (auto pais : paises) {
        delete pais;
    }

    return 0;
}
