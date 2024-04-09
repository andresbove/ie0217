#include <iostream>
#include <cstdlib>
#include <ctime>

class Planeta {
public:
    void imprimirInformacion() const {
        std::cout << "Informacion del planeta" << std::endl;
    }
};

class Pais {
protected:
    int identificador;
    int habitantes;
    double PIB;

public:
    Pais(int id, int hab) : identificador(id), habitantes(hab) {
        srand(time(0));
        PIB = rand() % 1000 + 100; // PIB aleatorio entre 100 y 1000
    }

    bool operator==(const Pais& otro) const {
        return this->identificador == otro.identificador;
    }

    void imprimirInformacion() const {
        std::cout << "Identificador: " << identificador << std::endl;
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
    PaisPrimerMundo(int id, int hab) : Pais(id, hab) {
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
    PaisEnDesarrollo(int id, int hab) : Pais(id, hab) {}

    void imprimirInformacion() const {
        Pais::imprimirInformacion();
    }
};

int main() {
    PaisPrimerMundo pais1(13, 1000000);
    PaisEnDesarrollo pais2(14, 500000);

    std::cout << "Informacion del pais de primer mundo:" << std::endl;
    pais1.imprimirInformacion();
    std::cout << std::endl;

    std::cout << "Informacion del pais en desarrollo:" << std::endl;
    pais2.imprimirInformacion();
    std::cout << std::endl;

    std::cout << "Los dos paises son del mismo tipo?: ";
    if (pais1 == pais2) {
        std::cout << "Si";
    } else {
        std::cout << "No";
    }
    std::cout << std::endl;

    return 0;
}
