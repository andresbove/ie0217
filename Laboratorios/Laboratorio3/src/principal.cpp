#include <iostream> // 
#include <string> // para no preocuparse de los strings

using namespace std;

struct Libro { // estructura de 3 miembros tipicos
    string titulo;
    string autor;
    string genero;
    Libro* siguiente; // 4to miembro, es un puntero, de tipo libro - puntero
    // apunta a otra estructura, no a ella misma
};

enum opciones {
    AGREGAR_LIBRO = 1,
    MOSTRAR_LIBRO = 2,
    SALIR = 3,
    OPCIONES_MAX
};

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

    lista = nuevoLibro;

    cout << "Libro agregado correctamente " << endl;
}

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

void liberarMemoria(Libro *& lista){
    while(lista != nullptr){        
    Libro* temp = lista;
    lista = lista -> siguiente;
    delete temp;
    }
}

int main() {
    Libro* listalibros = nullptr;
    int opcion;

    do{
        cout << "Selecciones su opcion" <<endl;
        cout << "1. Agregar un libro" <<endl;
        cout << "2. Mostrar todos los libros" <<endl;
        cout << "3. Salir" <<endl;
        cin >> opcion;

        switch (opcion)
        {
        case AGREGAR_LIBRO:
            agregarLibro(listalibros);
            break;
        case MOSTRAR_LIBRO:
            mostrarLibros(listalibros);
            break;
        case SALIR:
            cout << "Saliendo del programa." << endl;
            break;
        default:
            cout << "Opcion no permitida" <<endl;
            break;
        };

    } while (opcion != SALIR);

    liberarMemoria(listalibros);
    return 0;
}