#include <iostream>
#include "text_processor.hpp"

int main(int argc, char* argv[]) {
    // Verifica que se hayan pasado suficientes argumentos al programa.
    // Se espera al menos 5 argumentos: el nombre del archivo, los archivos de entrada y salida,
    // el patrón de búsqueda y la cadena de reemplazo.
    if (argc < 9) {
        // Muestra un mensaje de uso si los argumentos son insuficientes.
        std::cerr << "Usage: " << argv[0] << " -f <filename> -o <output file> -search <search_pattern> -replace <replace_string>\n";
        return 1; // Retorna un valor distinto de cero para indicar un error.
    }

    // Extrae el nombre del archivo de entrada de los argumentos.
    std::string filename = argv[2];
    // Extrae el nombre del archivo de salida de los argumentos.
    std::string outputfile = argv[4];
    // Extrae el patrón de búsqueda de los argumentos.
    std::string search_pattern = argv[6];
    // Extrae la cadena de reemplazo de los argumentos.
    std::string replace_string = argv[8];

    // Crea un objeto TextProcessor con los archivos de entrada y salida especificados.
    TextProcessor processor(filename, outputfile);

    // Llama a la función replace para reemplazar el patrón de búsqueda con la cadena de reemplazo.
    processor.replace(search_pattern, replace_string);

    // El programa retorna 0 para indicar que se ejecutó correctamente.
    return 0;
}
