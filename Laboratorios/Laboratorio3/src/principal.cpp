#include "funciones.cpp" // se incluye el archivo de funciones para que puedan ser importadas en el main.
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