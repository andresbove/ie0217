#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>

#include <iostream>
#include <vector>
#include <stdexcept>

template <typename T>
class Matriz {
private:
    int filas;
    int columnas;
    std::vector<std::vector<T>> datos;

public:
    Matriz(int f, int c) : filas(f), columnas(c), datos(f, std::vector<T>(c)) {
        if (f <= 0 || c <= 0) {
            throw std::invalid_argument("Las dimensiones de la matriz deben ser mayores a cero.");
        }
    }

    void setDimensiones(int f, int c) {
        if (f <= 0 || c <= 0) {
            throw std::invalid_argument("Las dimensiones de la matriz deben ser mayores a cero.");
        }
        filas = f;
        columnas = c;
        datos.resize(filas);
        for (int i = 0; i < filas; i++) {
            datos[i].resize(columnas);
        }
    }

    void llenarMatriz() {
        std::cout << "Llenar la matriz (" << filas << " x " << columnas << "):" << std::endl;
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                std::cout << "Ingrese el elemento (" << i + 1 << ", " << j + 1 << "): ";
                std::cin >> datos[i][j];
            }
        }
    }

    Matriz<T> operator+(const Matriz<T>& otra) const {
        if (filas != otra.filas || columnas != otra.columnas) {
            throw std::invalid_argument("Las dimensiones de las matrices no son compatibles para la suma.");
        }

        Matriz<T> resultado(filas, columnas);
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                resultado.datos[i][j] = datos[i][j] + otra.datos[i][j];
            }
        }
        return resultado;
    }

    Matriz<T> operator-(const Matriz<T>& otra) const {
        if (filas != otra.filas || columnas != otra.columnas) {
            throw std::invalid_argument("Las dimensiones de las matrices no son compatibles para la resta.");
        }

        Matriz<T> resultado(filas, columnas);
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                resultado.datos[i][j] = datos[i][j] - otra.datos[i][j];
            }
        }
        return resultado;
    }

    Matriz<T> operator*(const Matriz<T>& otra) const {
        if (columnas != otra.filas) {
            throw std::invalid_argument("El numero de columnas de la matriz A debe ser igual al numero de filas de la matriz B para la multiplicación.");
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

    void imprimir() const {
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                std::cout << datos[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};


template <typename T>
class OperacionesBasicas {
public:
    static void validarSumaResta(const Matriz<T>& a, const Matriz<T>& b) {
        if (a.filas != b.filas || a.columnas != b.columnas) {
            throw std::invalid_argument("Las dimensiones de las matrices no son compatibles para la operacion.");
        }
    }

    static void validarMultiplicacion(const Matriz<T>& a, const Matriz<T>& b) {
        if (a.columnas != b.filas) {
            throw std::invalid_argument("El numero de columnas de la matriz A debe ser igual al numero de filas de la matriz B para la multiplicación.");
        }
    }

    static Matriz<T> sumar(const Matriz<T>& a, const Matriz<T>& b) {
        validarSumaResta(a, b);
        return a + b;
    }

    static Matriz<T> restar(const Matriz<T>& a, const Matriz<T>& b) {
        validarSumaResta(a, b);
        return a - b;
    }

    static Matriz<T> multiplicar(const Matriz<T>& a, const Matriz<T>& b) {
        validarMultiplicacion(a, b);
        return a * b;
    }
};


class ValidadorDeEntrada {
public:
    static void validarTipoDato(const std::string& input) {
        if (input != "int" && input != "float" && input != "std::complex") {
            throw std::invalid_argument("Tipo de dato no compatible. Los tipos permitidos son: int, float, std::complex");
        }
    }

    static void validarDimensiones(int filas, int columnas) {
        if (filas <= 0 || columnas <= 0) {
            throw std::invalid_argument("Las dimensiones de la matriz deben ser enteros positivos.");
        }
    }
};  


void mostrarMenu() {
    std::cout << "\n--- Menu ---" << std::endl;
    std::cout << "1. Ingresar matrices" << std::endl;
    std::cout << "2. Mostrar matrices" << std::endl;
    std::cout << "3. Ejecutar operacion" << std::endl;
    std::cout << "4. Generar datos aleatorios" << std::endl;
    std::cout << "5. Finalizar programa" << std::endl;
    std::cout << "Elija una Opcion: ";
}

int main() {
    int opcion = 0;
    bool salir = false;

    while (!salir) {
        mostrarMenu();
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                // Lógica para ingresar matrices.
                std::cout << "Opcion 1: Ingresar matrices.\n";
                // Aquí puedes llamar a una función para ingresar matrices
                break;
            
            case 2:
                // Lógica para mostrar matrices.
                std::cout << "Opcion 2: Mostrar matrices.\n";
                // Aquí puedes llamar a una función para mostrar las matrices
                break;

            case 3:
                // Lógica para ejecutar operacion.
                std::cout << "Opcion 3: Ejecutar operacion.\n";
                // Aquí puedes llamar a una función para ejecutar la operacion seleccionada
                break;

            case 4:
                // Lógica para generar datos aleatorios.
                std::cout << "Opcion 4: Generar datos aleatorios.\n";
                // Aquí puedes llamar a una función para generar datos aleatorios
                break;

            case 5:
                // Opcion para finalizar el programa.
                std::cout << "Opcion 5: Finalizar programa.\n";
                salir = true;
                break;

            default:
                // Opcion no valida.
                std::cout << "Opcion no valida. Por favor, elija una Opcion valida." << std::endl;
        }
    }

    return 0;
}