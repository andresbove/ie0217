#include "header.hpp" // Se incluye el encabezado donde estan las bibliotecas generales

// Archivo para definir las funciones
// Estas son llamadas desde el main

void mostrarLibros (Libro* lista){ // se le pasa un puntero
 if ( lista == nullptr){ // si el puntero es nulo:
    cout << "Libreria no tiene libros " << endl;
    return;
 }

 cout << "lista de libros" <<endl;
 while (lista != nullptr){ // siempre que la lista de libros no sea vacia
    cout << "Titulo: " << lista->titulo << endl;
    cout << "Autor: " << lista->autor << endl;
    cout << "Genero: " << lista->genero << endl << endl;
 }
}

//  Referencia a una variable de tipo libro - puntero
void agregarLibro (Libro*& lista){ // se envia la referencia de la variable. Como llegar a ella
    Libro* nuevoLibro = new Libro;
    
    cout << "Ingrese el titulo del libro:  " << endl;
    cin.ignore();
    getline(cin, nuevoLibro ->titulo);

    cout << "Ingrese el autor del libro:  " << endl;
    getline(cin, nuevoLibro ->autor);

    cout << "Ingrese el genero del libro:  " << endl;
    getline(cin, nuevoLibro ->genero);

    nuevoLibro->siguiente = lista;
    lista = nuevoLibro;

    cout << "Libro agregado correctamente " << endl;
}


void liberarMemoria(Libro *& lista){
    while(lista != nullptr){        
    Libro* temp = lista;
    lista = lista -> siguiente;
    delete temp;
    }
}