#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include <string>

class Empleado { 
    protected: // Se pueden acceder a estos archivos desde clases heredadas
    std::string nombre;
    int edad;
    double salario;

    public:
    Empleado(std::string _string, int _edad, double _salario);
    virtual ~Empleado(){} // Se libera la memoria asignada para que alguien mas la use
    virtual double calcularPago() const = 0; // Metodo virtual puro
    virtual void mostrarDetalles() const; // Metodo virtual no puro
};

#endif //EMPLEADO_HPP