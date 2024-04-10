#include "header.hpp"

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
