#include <iostream>
using namespace std;

// Clase plantilla con múltiples parámetros y valores predeterminados

template <class T, class U, class V = char>
class ClassTemplate {
    private:
        // Variables de tipos T, U y V
        T var1;
        U var2;
        V var3;

    public:
        // Constructor que inicializa var1, var2 y var3 con los valores proporcionados
        ClassTemplate(T v1, U v2, V v3) : var1(v1), var2(v2), var3(v3) {}

        // Método para imprimir los valores de var1, var2 y var3
        void printVar() {
            cout << "var1 = " << var1 << endl;
            cout << "var2 = " << var2 << endl;
            cout << "var3 = " << var3 << endl;
        }
};

int main() {
    // Creando un objeto con los tipos de datos int, double y char
    ClassTemplate<int, double> obj1(7, 7.7, 'c');
    cout << "Valores de obj1 = " << endl;
    obj1.printVar();

    // Creando un objeto con los tipos de datos double, char y bool
    ClassTemplate<double, char, bool> obj2(8.8, 'a', false);
    cout << "\nValores de obj2 = " << endl;
    obj2.printVar();

    return 0;
}