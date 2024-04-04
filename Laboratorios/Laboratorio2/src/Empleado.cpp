#include "Empleado.hpp"
#include <iostream>

Empleado::Empleado(std::string _nombre, int _edad, double _salario):
nombre(_nombre), edad(_edad), salario(_salario) {}//atributos de la clase


void Empleado::mostrarDetalles() const { //Definicion de metodo virtual no puro
std::cout << "Nombre:" <<nombre <<std::endl;
std::cout << "Edad:" <<nombre <<std::endl;
std::cout << "Salario:" <<nombre <<std::endl;

}