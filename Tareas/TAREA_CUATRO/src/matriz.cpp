#include "header.hpp"

template <typename T>
class Matriz {
private:
    std::vector<std::vector<T>> datos;
    int filas;
    int columnas;

public:
    // Constructor
    Matriz(int filas, int columnas) {
        setDimensiones(filas, columnas);
        datos.resize(filas, std::vector<T>(columnas, T()));
    }

    // Destructor
    ~Matriz() {}

    // Método para establecer dimensiones
    void setDimensiones(int filas, int columnas) {
        if (filas <= 0 || columnas <= 0) {
            throw std::invalid_argument("Las dimensiones deben ser positivas.");
        }
        this->filas = filas;
        this->columnas = columnas;
    }

    // Método para llenar la matriz
    void llenarMatriz() {
        std::cout << "Llenar matriz de dimensiones (" << filas << "x" << columnas << "):" << std::endl;
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                std::cout << "Elemento [" << i << "][" << j << "]: ";
                std::cin >> datos[i][j];
            }
        }
    }

    // Sobrecarga del operador +
    Matriz<T> operator+(const Matriz<T>& otra) const {
        if (filas != otra.filas || columnas != otra.columnas) {
            throw std::invalid_argument("Las dimensiones de las matrices no coinciden para la operación de suma.");
        }
        Matriz<T> resultado(filas, columnas);
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                resultado.datos[i][j] = datos[i][j] + otra.datos[i][j];
            }
        }
        return resultado;
    }

    // Sobrecarga del operador -
    Matriz<T> operator-(const Matriz<T>& otra) const {
        if (filas != otra.filas || columnas != otra.columnas) {
            throw std::invalid_argument("Las dimensiones de las matrices no coinciden para la operación de resta.");
        }
        Matriz<T> resultado(filas, columnas);
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                resultado.datos[i][j] = datos[i][j] - otra.datos[i][j];
            }
        }
        return resultado;
    }

    // Sobrecarga del operador *
    Matriz<T> operator*(const Matriz<T>& otra) const {
        if (columnas != otra.filas) {
            throw std::invalid_argument("El número de columnas de la matriz A debe coincidir con el número de filas de la matriz B para la operación de multiplicación.");
        }
        Matriz<T> resultado(filas, otra.columnas);
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < otra.columnas; j++) {
                resultado.datos[i][j] = T();
                for (int k = 0; k < columnas; k++) {
                    resultado.datos[i][j] += datos[i][k] * otra.datos[k][j];
                }
            }
        }
        return resultado;
    }

    // Método para mostrar la matriz
    void mostrarMatriz() const {
        std::cout << "Matriz de dimensiones (" << filas << "x" << columnas << "):" << std::endl;
        for (const auto& fila : datos) {
            for (const auto& elemento : fila) {
                std::cout << elemento << " ";
            }
            std::cout << std::endl;
        }
    }
};
