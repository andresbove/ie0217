#include "EmpleadoPorHoras.hpp"

EmpleadoPorHoras::EmpleadoPorHoras(std::string _nombre, int _edad, double _salario, int _horasTrabajadas)
: Empleado(_nombre, _edad, _salario), horasTrabajadas(_horasTrabajadas) {}

double EmpleadoPorHoras::calcularPago() const {
    return salario * horasTrabajadas;
}