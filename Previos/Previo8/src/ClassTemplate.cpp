#include<iostream>
using namespace std;

// Definición de una clase plantilla
template<class T>
class Number {
    private:
        // Variable de tipo T para almacenar un número
        T num;

    public:
        // Constructor que inicializa la variable num con el valor proporcionado
        Number(T n) : num(n) {}

        // Método para obtener el valor de la variable num
        T getNum() {
            return num;
        }
};

int main() {
    // Crear un objeto Number<int> y asignarle un valor entero de 7
    Number<int> numberInt(7);

    // Crear un objeto Number<double> y asignarle un valor decimal de 7.7
    Number<double> numberDouble(7.7);

    // Imprimir el valor entero almacenado en numberInt
    cout << "Numero de tipo int = " << numberInt.getNum() << endl;

    // Imprimir el valor decimal almacenado en numberDouble
    cout << "Numero de tipo double = " << numberDouble.getNum() << endl;

    return 0;
}