#include <string>
#include "header.hpp"

class ValidadorDeEntrada {
public:
    // Método para validar el tipo de dato
    static void validarTipoDato(const std::string& input, std::string tipoPermitido) {
        if (input != tipoPermitido) {
            throw std::invalid_argument("El tipo de dato ingresado no es compatible.");
        }
    }

    // Método para validar las dimensiones
    static void validarDimensiones(int tamano) {
        if (tamano <= 0) {
            throw std::invalid_argument("Las dimensiones deben ser enteros positivos.");
        }
    }
};
