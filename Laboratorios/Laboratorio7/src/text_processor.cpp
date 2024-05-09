#include "text_processor.hpp"
#include <fstream>
#include <regex>

TextProcessor::TextProcessor(const std::string& input_filename, const std::string& output_filename)
    : input_filename(input_filename), output_filename(output_filename) {
    // Constructor: Inicializa los nombres de los archivos de entrada y salida con los valores proporcionados.
}

void TextProcessor::replace(const std::string& search_pattern, const std::string& replace_string) {
    // Abre el archivo de entrada para leer.
    std::ifstream input_file(input_filename);
    // Abre el archivo de salida para escribir.
    std::ofstream output_file(output_filename);

    // Variable para almacenar cada línea del archivo de entrada.
    std::string line;
    
    // Crea un objeto regex con el patrón de búsqueda proporcionado.
    std::regex pattern(search_pattern);

    // Verifica si los archivos de entrada y salida se abrieron correctamente.
    if (input_file && output_file) {
        // Lee cada línea del archivo de entrada.
        while (getline(input_file, line)) {
            // Reemplaza todas las coincidencias del patrón en la línea por la cadena de reemplazo.
            std::string replaced = std::regex_replace(line, pattern, replace_string);
            // Escribe la línea reemplazada en el archivo de salida.
            output_file << replaced << "\n";
        }
    }
    // Si los archivos no se abrieron correctamente, el método simplemente no realiza ninguna acción.
}
