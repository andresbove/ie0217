#include <iostream>
#include <regex>
#include <stdexcept>
#include <string>

// Excepción general para correo electrónico inválido
class InvalidEmailException : public std::runtime_error {
public:
    explicit InvalidEmailException(const std::string &msg) : std::runtime_error(msg) {}
};

// Excepción para nombre inválido
class InvalidNameException : public InvalidEmailException {
public:
    explicit InvalidNameException(const std::string &msg) : InvalidEmailException("Invalid Name: " + msg) {}
};

// Excepción para dominio inválido
class InvalidDomainException : public InvalidEmailException {
public:
    explicit InvalidDomainException(const std::string &msg) : InvalidEmailException("Invalid Domain: " + msg) {}
};

// Excepción para extensión inválida
class InvalidExtensionException : public InvalidEmailException {
public:
    explicit InvalidExtensionException(const std::string &msg) : InvalidEmailException("Invalid Extension: " + msg) {}
};

// Excepción para correo sin '@'
class MissingAtSymbolException : public InvalidEmailException {
public:
    MissingAtSymbolException() : InvalidEmailException("Email must contain the '@' symbol.") {}
};

// Clase para validar correos electrónicos
class ValidadorEmail {
public:
    // Método que valida el correo electrónico
    void validarCorreo(const std::string &correo) {
        // Verificar que contenga el símbolo '@'
        size_t atPos = correo.find('@');
        if (atPos == std::string::npos) {
            throw MissingAtSymbolException();
        }

        // Dividir el correo en nombre y dominio/extension
        std::string nombre = correo.substr(0, atPos);
        std::string dominioYExtension = correo.substr(atPos + 1);
        size_t dotPos = dominioYExtension.rfind('.');
        if (dotPos == std::string::npos) {
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
            throw InvalidNameException("Name must follow the specified rules.");
        }
    }

    // Método para validar el dominio
    void validarDominio(const std::string &dominio) {
        // Expresión regular para validar el dominio
        std::regex dominioRegex("^[A-Za-z]+(\\.[A-Za-z]+)*$");
        if (dominio.length() < 3 || dominio.length() > 30 || !std::regex_match(dominio, dominioRegex)) {
            throw InvalidDomainException("Domain must follow the specified rules.");
        }
    }

    // Método para validar la extensión
    void validarExtension(const std::string &extension) {
        // Expresión regular para validar la extensión
        std::regex extensionRegex("^[A-Za-z]{2,6}(\\.[A-Za-z]{2,6})?$");
        if (!std::regex_match(extension, extensionRegex)) {
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

// Función principal
int main() {
    ValidadorEmail validador;  // Crear un objeto validador
    int opcion;
    std::string correo;

    do {
        mostrarMenu();  // Mostrar el menú
        std::cin >> opcion;  // Leer la opción seleccionada
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Limpiar el buffer

        switch (opcion) {
            case 1:
                std::cout << "Ingrese el correo electronico: ";
                std::getline(std::cin, correo);  // Leer el correo electrónico

                try {
                    validador.validarCorreo(correo);  // Validar el correo
                    std::cout << "El correo electronico es valido.\n";
                } catch (const InvalidEmailException &ex) {
                    std::cout << "Error: " << ex.what() << "\n";  // Mostrar mensaje de error si es inválido
                }
                break;

            case 2:
                std::cout << "Saliendo del programa...\n";  // Salir del programa
                break;

            default:
                std::cout << "Opcion no valida. Intente de nuevo.\n";  // Manejar opción no válida
                break;
        }
    } while (opcion != 2);  // Repetir hasta que el usuario decida salir

    return 0;
}
