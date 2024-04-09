#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

class Planeta {
public:
    void imprimirInformacion() const {
        std::cout << "Informacion del planeta" << std::endl;
    }
};

class Pais {
protected:
    std::string nombre;
    int habitantes;
    double PIB;

public:
    Pais(const std::string& n, int hab) : nombre(n), habitantes(hab) {
        srand(time(0));
        PIB = rand() % 1000 + 100; // PIB aleatorio entre 100 y 1000
    }

    bool operator==(const Pais& otro) const {
        return this->nombre == otro.nombre;
    }

    void imprimirInformacion() const {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Habitantes: " << habitantes << std::endl;
        std::cout << "PIB: " << PIB << std::endl;
    }
};

class PaisPrimerMundo : public Pais {
private:
    bool tecnologia5G;
    bool centroInvestigacion;

    void calcularTrabajo() {
        // Supongamos que 70% de la población tiene trabajo
        tecnologia5G = rand() % 2 == 0; // Tecnología 5G aleatoria
        centroInvestigacion = rand() % 2 == 0; // Centro de investigación aleatorio
    }

public:
    PaisPrimerMundo(const std::string& n, int hab) : Pais(n, hab) {
        calcularTrabajo();
    }

    void imprimirInformacion() const {
        Pais::imprimirInformacion();
        std::cout << "Tecnologia 5G: " << (tecnologia5G ? "Si" : "No") << std::endl;
        std::cout << "Centro de Investigacion: " << (centroInvestigacion ? "Si" : "No") << std::endl;
    }
};

class PaisEnDesarrollo : public Pais {
public:
    PaisEnDesarrollo(const std::string& n, int hab) : Pais(n, hab) {}

    void imprimirInformacion() const {
        Pais::imprimirInformacion();
    }
};

void mostrarMenu() {
    std::cout << "\nMenú:" << std::endl;
    std::cout << "1. Imprimir información de todos los países." << std::endl;
    std::cout << "2. Comparar países." << std::endl;
    std::cout << "3. Agregar un nuevo país." << std::endl;
    std::cout << "4. Eliminar un país." << std::endl;
    std::cout << "5. Salir del programa." << std::endl;
    std::cout << "Ingrese la opción deseada: ";
}

int main() {
    srand(time(0));

    std::vector<Pais*> paises;

    Planeta planeta;

    int opcion;
    std::string nombre; // Declarar aquí la variable 'nombre'
    do {
        mostrarMenu();
        std::cin >> opcion;
        switch (opcion) {
            case 1:
                std::cout << "Información de todos los países:" << std::endl;
                for (auto pais : paises) {
                    pais->imprimirInformacion();
                    std::cout << std::endl;
                }
                break;
            case 2:
                int indice1, indice2;
                std::cout << "Ingrese el índice del primer país: ";
                std::cin >> indice1;
                std::cout << "Ingrese el índice del segundo país: ";
                std::cin >> indice2;
                if (indice1 >= 0 && indice1 < paises.size() && indice2 >= 0 && indice2 < paises.size()) {
                    if (*paises[indice1] == *paises[indice2]) {
                        std::cout << "Los dos países son del mismo tipo." << std::endl;
                    } else {
                        std::cout << "Los dos países no son del mismo tipo." << std::endl;
                    }
                } else {
                    std::cout << "Índices inválidos." << std::endl;
                }
                break;
            case 3:
                int tipo, hab;
                std::cout << "Ingrese el tipo de país (1 para Primer Mundo, 2 para En Desarrollo): ";
                std::cin >> tipo;
                std::cout << "Ingrese el nombre del país: ";
                std::cin.ignore(); // Limpiar el buffer del teclado antes de getline
                std::getline(std::cin, nombre);
                std::cout << "Ingrese la cantidad de habitantes del país: ";
                std::cin >> hab;
                if (tipo == 1) {
                    paises.push_back(new PaisPrimerMundo(nombre, hab));
                } else if (tipo == 2) {
                    paises.push_back(new PaisEnDesarrollo(nombre, hab));
                } else {
                    std::cout << "Tipo de país inválido." << std::endl;
                }
                break;
            case 4:
                int indiceEliminar;
                std::cout << "Ingrese el índice del país que desea eliminar: ";
                std::cin >> indiceEliminar;
                if (indiceEliminar >= 0 && indiceEliminar < paises.size()) {
                    delete paises[indiceEliminar];
                    paises.erase(paises.begin() + indiceEliminar);
                    std::cout << "País eliminado correctamente." << std::endl;
                } else {
                    std::cout << "Índice inválido." << std::endl;
                }
                break;
            case 5:
                std::cout << "Saliendo del programa." << std::endl;
                break;
            default:
                std::cout << "Opción inválida. Por favor, seleccione una opción válida." << std::endl;
                break;
        }
    } while (opcion != 5);

    // Limpiar memoria de los países restantes
    for (auto pais : paises) {
        delete pais;
    }

    return 0;
}
