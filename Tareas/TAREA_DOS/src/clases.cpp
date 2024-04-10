#include "header.hpp"  // Se incluye el archivo "header.hpp"

/**
* @brief Se establece la clase 'adivinar'
* Tiene un metodo para imprimir mensajes al usuario
* @param  Planeta es la clase
*/

class Planeta { // Se define la clase 'Planeta
public: // Se establece el constructor como publico
    void imprimirInformacion() const {  // Se crea una metodo para imprimir un mensaje al usuario
        std::cout << "Informacion del planeta" << std::endl;
    }
};


/**
* @brief Se establece la clase 'Pais'
* Tiene tres atributos, 1 string, 1 entero y 1 double para el PIB.
* Esta clase es publica. En el constructor se calcula el PIB.
* Tambien tiene un metodo para imprimir mensajes al usuario
* @param  Pais
*/
class Pais { // Se crea la clase 'Pais'
protected: // Se establecen atributos protegidos
    std::string nombre; // atributo tipo string
    int habitantes; // atributo tipo int
    double PIB;

public: // Se define el constructor como publico
    Pais(const std::string& n, int hab) : nombre(n), habitantes(hab) { // Le van a entrar los datos 'n' y 'hab' al constructor
        srand(time(0));  
        PIB = rand() % 1000 + 100; // PIB aleatorio entre 100 y 1000
    }

    bool operator==(const Pais& otro) const { // Se define un metodo booleano
        return this->nombre == otro.nombre;
    }

    virtual void imprimirInformacion() const {  // Se define un metodo para imprimir informacion al usuario
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Habitantes: " << habitantes << std::endl;
        std::cout << "PIB: " << PIB << std::endl;
    }
};

/**
* @brief Se establece la clase 'PaisPrimerMundo'
* Esta clase es heredada de la clase 'Pais'
* Tiene dos atributos privados
* En su constructor se guardan variables que el usuario ingresa.
* Tiene 3 metodos
* @param  PaisPrimerMundo
*/

class PaisPrimerMundo : public Pais { // Se crea una clase llamada 'PaisPrimerMundo', heredada de 'Pais'
private:  // Atributos de la clase 'PaisPrimerMundo'
    bool tecnologia5G;
    bool aeropuerto;

    void calcularCaracteristicas() { //Metodo de la clase 'PaisPrimerMundo'
        tecnologia5G = false;
        aeropuerto = false;
    }

public:
    PaisPrimerMundo(const std::string& n, int hab) : Pais(n, hab) { // Constructor de la clase 'PaisPrimerMundo'
        calcularCaracteristicas();
    }

// Esto es lo que va a ejecutar cada instancia de la clase 'PaisPrimerMundo'
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
//Fin de lo que ejecuta el constructor


/**
* @brief Se establece la clase 'PaisEnDesarrollo'
* Esta clase es heredada de la clase 'Pais'
* Tiene 1 atributo privado
* En su constructor se guardan variables que el usuario ingresa.
* Tiene 2 metodos publicos
* @param  PaisEnDesarrollo
*/

class PaisEnDesarrollo : public Pais { // Se crea una clase llamada 'PaisPrimerMundo', heredada de 'Pais'
private:
    bool aeropuerto;

public:
//Constructor para 'PaisEnDesarrollo'
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
//Fin del Constructor para 'PaisEnDesarrollo'

/**
* @brief Se establece el Menu
* Esta es una funcion
* Nada mas imprime mensajes al usuario
* @param  mostrarMenu
*/

void mostrarMenu() { // Funcion para el menu
    std::cout << "\nMenu:" << std::endl;
    std::cout << "1. Imprimir informacion de todos los paises." << std::endl;
    std::cout << "2. Comparar paises." << std::endl;
    std::cout << "3. Agregar un nuevo pais." << std::endl;
    std::cout << "4. Eliminar un pais." << std::endl;
    std::cout << "5. Salir del programa." << std::endl;
    std::cout << "Ingrese la opcion deseada: ";
}
