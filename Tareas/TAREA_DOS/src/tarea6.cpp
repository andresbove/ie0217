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

    virtual void imprimirInformacion() const {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Habitantes: " << habitantes << std::endl;
        std::cout << "PIB: " << PIB << std::endl;
    }
};

class PaisPrimerMundo : public Pais {
private:
    bool tecnologia5G;
    bool aeropuerto;

    void calcularCaracteristicas() {
        tecnologia5G = false;
        aeropuerto = false;
    }

public:
    PaisPrimerMundo(const std::string& n, int hab) : Pais(n, hab) {
        calcularCaracteristicas();
    }

    void setTecnologia5G(bool tiene5G) {
        tecnologia5G = tiene5G;
    }

    void setAeropuerto(bool tieneAeropuerto) {
        aeropuerto = tieneAeropuerto;
    }

    void imprimirInformacion() const override {
        Pais::imprimirInformacion();
        std::cout << "Tecnologia 5G: " << (tecnologia5G ? "Si" : "No") << std::endl;
        std::cout << "Aeropuerto: " << (aeropuerto ? "Si" : "No") << std::endl;
    }
};

class PaisEnDesarrollo : public Pais {
private:
    bool aeropuerto;

public:
    PaisEnDesarrollo(const std::string& n, int hab) : Pais(n, hab) {
        aeropuerto = false; // Los paises en desarrollo no tienen aeropuertos por defecto
    }

    void setAeropuerto(bool tieneAeropuerto) {
        aeropuerto = tieneAeropuerto;
    }

    void imprimirInformacion() const override {
        Pais::imprimirInformacion();
        std::cout << "Tecnologia 5G: No" << std::endl; // Los paises en desarrollo no tienen tecnologia 5G
        std::cout << "Aeropuerto: " << (aeropuerto ? "Si" : "No") << std::endl;
    }
};

void mostrarMenu() {
    std::cout << "\nMenu:" << std::endl;
    std::cout << "1. Imprimir informacion de todos los paises." << std::endl;
    std::cout << "2. Comparar paises." << std::endl;
    std::cout << "3. Agregar un nuevo pais." << std::endl;
    std::cout << "4. Eliminar un pais." << std::endl;
    std::cout << "5. Salir del programa." << std::endl;
    std::cout << "Ingrese la opcion deseada: ";
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
                std::cout << "informacion de todos los paises:" << std::endl;
                for (int i = 0; i < paises.size(); ++i) {
                    std::cout << "indice: " << i << std::endl;
                    paises[i]->imprimirInformacion();
                    std::cout << std::endl;
                }
                break;
            case 2:
                int indice1, indice2;
                std::cout << "Ingrese el indice del primer pais: ";
                std::cin >> indice1;
                std::cout << "Ingrese el indice del segundo pais: ";
                std::cin >> indice2;
                if (indice1 >= 0 && indice1 < paises.size() && indice2 >= 0 && indice2 < paises.size()) {
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
                std::cin >> tipo;
                std::cout << "Ingrese el nombre del pais: ";
                std::cin.ignore(); // Limpiar el buffer del teclado antes de getline
                std::getline(std::cin, nombre);
                std::cout << "Ingrese la cantidad de habitantes del pais: ";
                std::cin >> hab;
                if (tipo == 1) {
                    PaisPrimerMundo* nuevoPais = new PaisPrimerMundo(nombre, hab);
                    bool tiene5G;
                    std::cout << "El pais tiene tecnologia 5G? (1 para Si, 0 para No): ";
                    std::cin >> tiene5G;
                    nuevoPais->setTecnologia5G(tiene5G);
                    std::cout << "El pais tiene aeropuerto? (1 para Si, 0 para No): ";
                    std::cin >> tieneAeropuerto;
                    nuevoPais->setAeropuerto(tieneAeropuerto);
                    paises.push_back(nuevoPais);
                } else if (tipo == 2) {
                    PaisEnDesarrollo* nuevoPais = new PaisEnDesarrollo(nombre, hab);
                    std::cout << "¿El pais tiene aeropuerto? (1 para Si, 0 para No): ";
                    std::cin >> tieneAeropuerto;
                    nuevoPais->setAeropuerto(tieneAeropuerto);
                    paises.push_back(nuevoPais);
                } else {
                    std::cout << "Tipo de pais inválido." << std::endl;
                }
                break;
            case 4:
                int indiceEliminar;
                std::cout << "Ingrese el indice del pais que desea eliminar: ";
                std::cin >> indiceEliminar;
                if (indiceEliminar >= 0 && indiceEliminar < paises.size()) {
                    delete paises[indiceEliminar];
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
