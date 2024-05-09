#ifndef TEXTPROCESSOR_HPP
#define TEXTPROCESSOR_HPP

#include <string>

class TextProcessor {
    private:
        std::string input_filename; // Nombre del archivo de entrada
        std::string output_filename; // Nombre del archivo de salida

    public:
        // Constructor de la clase. Toma los nombres de los archivos de entrada y salida como parámetros
        TextProcessor(const std::string& input_filename, const std::string& output_filename);

        // Función que reemplaza las ocurrencias de un string en un archivo con otro string
        // search_filename es el nombre del archivo que contiene el texto a buscar
        // replace_string es el texto que se usará para reemplazar las ocurrencias
        void replace(const std::string& search_filename, const std::string& replace_string);
};

#include "text_processor.cpp"

#endif //TEXTPROCESSOR_HPP
