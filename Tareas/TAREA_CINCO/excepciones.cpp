#include "header.hpp"  // Incluir el archivo de cabecera

// Clase base para excepciones de correo electrónico inválido
class InvalidEmailException : public std::runtime_error {
public:
    // Constructor que inicializa la excepción con un mensaje
    explicit InvalidEmailException(const std::string &msg) : std::runtime_error(msg) {}
};

// Clase para excepciones de nombre inválido
class InvalidNameException : public InvalidEmailException {
public:
    // Constructor que inicializa la excepción con un mensaje específico para el nombre
    explicit InvalidNameException(const std::string &msg) : InvalidEmailException("Invalid Name: " + msg) {}
};

// Clase para excepciones de dominio inválido
class InvalidDomainException : public InvalidEmailException {
public:
    // Constructor que inicializa la excepción con un mensaje específico para el dominio
    explicit InvalidDomainException(const std::string &msg) : InvalidEmailException("Invalid Domain: " + msg) {}
};

// Clase para excepciones de extensión inválida
class InvalidExtensionException : public InvalidEmailException {
public:
    // Constructor que inicializa la excepción con un mensaje específico para la extensión
    explicit InvalidExtensionException(const std::string &msg) : InvalidEmailException("Invalid Extension: " + msg) {}
};

// Clase para excepciones de falta del símbolo '@'
class MissingAtSymbolException : public InvalidEmailException {
public:
    // Constructor que inicializa la excepción con un mensaje específico para la falta del símbolo '@'
    MissingAtSymbolException() : InvalidEmailException("Email must contain the '@' symbol.") {}
};
