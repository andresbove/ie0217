#include "Funciones.hpp"

void agregarContacto(Contacto listaContactos[], int &numContactos){
    Contacto nuevoContacto;
    std::cout << " Ingrese el nombre del contacto:";
    std::cin >> nuevoContacto.nombre;
    
    std::cout << " Ingrese el nombre del telefono:";
    std::cin >> nuevoContacto.telefono;

    listaContactos[numContactos++] = nuevoContacto;
};

void mostrarContacto(const Contacto listaContactos[], int numContactos)
{
    std::cout << "Lista de contactos:\n";
    for (int i = 0; i < numContactos; ++i)
    {
        std::cout << "Nombre:" << listaContactos[i].nombre << ", Telefono" << listaContactos[i].telefono <<"\n";
    }
};

void buscarContacto(const Contacto listaContactos[], int numContactos){
    std::string nombreBusqueda;
    std:: cout << "Ingrese el nombre a buscar: ";
    std:: cin >> nombreBusqueda;
    bool encontrado = false;
    for (int i = 0; i < numContactos; i++)
    {
        if (listaContactos[i].nombre == nombreBusqueda)
        {
            std::cout << "Nombre:" << listaContactos[i].nombre << ", Telefono" << listaContactos[i].telefono <<"\n";
            encontrado = true;
            break;
        }
    if (!encontrado)
    {
        std::cout << "Contacto no encontrado.\n";
    }
    }
};