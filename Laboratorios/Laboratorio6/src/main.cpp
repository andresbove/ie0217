#include <iostream>
#include <vector>
#include <cmath>
#include <stdexcept>

template <typename T>
class Statistics {
public:
    // constructor que recibe una lista de datos
    // si la lista está vacía, lanzamos un error porque no tiene sentido calcular estadísticas
    Statistics(const std::vector<T>& data) : data(data) {
        if (data.empty()) {
            throw std::invalid_argument("La lista tiene que contener elementos");
        }
    }

    // función para calcular la media de los datos
    double mean() const {
        T sum = 0;
        // suma todos los valores de la lista
        for (const T& value : data) {
            sum += value;
        }
        // calcula la media dividiendo la suma por el número de elementos
        return static_cast<double>(sum) / data.size();
    }

    // función para calcular la desviación estándar
    double standardDeviation() const {
        double meanValue = mean(); // Primero, calcula la media
        double sumSquares = 0;

        // calcula la suma de las diferencias cuadradas de cada valor con la media
        for (const T& value : data) {
            sumSquares += (value - meanValue) * (value - meanValue);
        }
        // calcula la desviación estándar tomando la raíz cuadrada de la varianza
        return std::sqrt(sumSquares / data.size());
    }

private:
    // guarda la lista de datos en un vector
    std::vector<T> data;
};

int main() {
    try {
        // crea una lista de enteros
        std::vector<int> intData = {1, 2, 3, 4, 5};

        // crea una instancia de la clase Statistics para los datos enteros
        Statistics<int> statsInt(intData);

        // muestra la media y la desviación estándar de los datos enteros
        std::cout << "Media de 'intData': " << statsInt.mean() << std::endl;
        std::cout << "Desviacion estandar de 'intData': " << statsInt.standardDeviation() << std::endl;

        // crea una lista de números decimales (dobles)
        std::vector<double> doubleData = {1.5, 2.5, 3.5, 4.5, 5.5};

        // crea una instancia de la clase Statistics para los datos dobles
        Statistics<double> statsDouble(doubleData);

        // muestra la media de 'doubleData'
        std::cout << "Media de 'doubleData': " << statsDouble.mean() << std::endl;

        std::cout << "Desviacion estandar de 'doubleData': " << statsDouble.standardDeviation() << std::endl;

        // crea una lista vacía
        std::vector<int> emptyData;

        // intenta crear una instancia de la clase Statistics con la lista vacía
        // esto lanzará una excepción porque la lista está vacía
        Statistics<int> statsEmpty(emptyData);

    } catch (const std::invalid_argument& e) {
        // captura cualquier excepción y muestra el mensaje de error
        std::cerr << "Excepcion encontrada: " << e.what() << std::endl;
    }

    return 0;
}
