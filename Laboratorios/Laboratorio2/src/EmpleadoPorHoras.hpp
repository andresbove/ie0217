#ifndef EMPLEADOPORHORAS_HPP
#define EMPLEADOPORHORAS_HPP

#include "Empleado.hpp"

class EmpleadoPorHoras : public Empleado {
    private: 
    int horasTrabajadas; //Solo pueden acceder a esta la misma clase o funciones amigas

    public:
    EmpleadoPorHoras(std::string _nombre, int _edad, double _salario, int _horasTrabajadas);
    double calcularPago() const override;
};

#endif //EMPLEADOPORHORAS_HPP

