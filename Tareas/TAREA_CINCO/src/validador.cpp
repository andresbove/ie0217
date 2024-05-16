#include "header.hpp"      // Incluir el archivo de cabecera
#include "excepciones.cpp" // Incluir el archivo de excepciones

// Clase para validar correos electrónicos
class ValidadorEmail {
public:
    // Método que valida el correo electrónico
    void validarCorreo(const std::string &correo) {
        // Verificar que contenga el símbolo '@'
        size_t atPos = correo.find('@');
        if (atPos == std::string::npos) {
            // Lanzar excepción si falta '@'
            throw MissingAtSymbolException();
        }

        // Dividir el correo en nombre y dominio/extension
        std::string nombre = correo.substr(0, atPos);
        std::string dominioYExtension = correo.substr(atPos + 1);
        
        // Encontrar la posición del último punto
        size_t dotPos = dominioYExtension.rfind('.');
        if (dotPos == std::string::npos) {
            // Lanzar excepción si falta el punto en la parte de dominio y extensión
            throw InvalidExtensionException("Missing '.' in domain and extension part.");
        }

        // Separar el dominio y la extensión
        std::string dominio = dominioYExtension.substr(0, dotPos);
        std::string extension = dominioYExtension.substr(dotPos + 1);

        // Validar cada parte
        validarNombre(nombre);
        validarDominio(dominio);
        validarExtension(extension);
    }

private:
    // Método para validar el nombre
    void validarNombre(const std::string &nombre) {
        // Expresión regular para validar el nombre
        std::regex nombreRegex("^[A-Za-z0-9](?!.*[._-]{2})([A-Za-z0-9._-]{0,13}[A-Za-z0-9])?$");
        if (!std::regex_match(nombre, nombreRegex)) {
            // Lanzar excepción si el nombre no cumple las reglas
            throw InvalidNameException("Name must follow the specified rules.");
        }
    }

    // Método para validar el dominio
    void validarDominio(const std::string &dominio) {
        // Expresión regular para validar el dominio
        std::regex dominioRegex("^[A-Za-z]+(\\.[A-Za-z]+)*$");
        if (dominio.length() < 3 || dominio.length() > 30 || !std::regex_match(dominio, dominioRegex)) {
            // Lanzar excepción si el dominio no cumple las reglas
            throw InvalidDomainException("Domain must follow the specified rules.");
        }
    }

    // Método para validar la extensión
    void validarExtension(const std::string &extension) {
        // Expresión regular para validar la extensión
        std::regex extensionRegex("^[A-Za-z]{2,6}(\\.[A-Za-z]{2,6})?$");
        if (!std::regex_match(extension, extensionRegex)) {
            // Lanzar excepción si la extensión no cumple las reglas
            throw InvalidExtensionException("Extension must follow the specified rules.");
        }
    }
};

// Función para mostrar el menú
void mostrarMenu() {
    std::cout << "Menu:\n";
    std::cout << "1. Ingresar correo electronico\n";
    std::cout << "2. Salir\n";
    std::cout << "Seleccione una opcion: ";
}
