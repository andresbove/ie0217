#ifndef FUNCIONES_HPP // Se busca si hay algun archivo con algún comando
#define FUNCIONES_HPP // si no lo encuentra, lo agarra de acá
#include "Contacto.hpp"
#include <iostream>
#include <string>

//Se le envia una lista de contactos ya definida.
// Se envia el & para poder modificar la variable numContactos
void agregarContacto(Contacto listaContactos[], int &numContactos);
void mostrarContacto(const Contacto listaContactos[], int numContactos);
void buscarContacto(const Contacto listaContactos[], int numContactos);

#endif