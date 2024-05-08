#include "header.hpp"
template <typename T>
class OperacionesBasicas {
public:
    // Método para validar suma/resta
    static void validarSumaResta(const Matriz<T>& a, const Matriz<T>& b) {
        if (a.getFilas() != b.getFilas() || a.getColumnas() != b.getColumnas()) {
            throw std::invalid_argument("Las dimensiones de las matrices deben coincidir para realizar operaciones de suma o resta.");
        }
    }

    // Método para validar multiplicación
    static void validarMultiplicacion(const Matriz<T>& a, const Matriz<T>& b) {
        if (a.getColumnas() != b.getFilas()) {
            throw std::invalid_argument("El número de columnas de la matriz A debe coincidir con el número de filas de la matriz B para la operación de multiplicación.");
        }
    }

    // Método para realizar suma de matrices
    static Matriz<T> suma(const Matriz<T>& a, const Matriz<T>& b) {
        validarSumaResta(a, b);
        return a + b;
    }

    // Método para realizar resta de matrices
    static Matriz<T> resta(const Matriz<T>& a, const Matriz<T>& b) {
        validarSumaResta(a, b);
        return a - b;
    }

    // Método para realizar multiplicación de matrices
    static Matriz<T> multiplicacion(const Matriz<T>& a, const Matriz<T>& b) {
        validarMultiplicacion(a, b);
        return a * b;
    }
};
