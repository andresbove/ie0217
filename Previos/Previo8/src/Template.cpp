#include<iostream>
using namespace std;

// Función plantilla para sumar dos valores de tipo T
template<typename T>
T add(T num1, T num2) {
    // Retorna la suma de num1 y num2
    return (num1 + num2);
}

int main() {
    int result1;
    double result2;

    // Llamada a la función 'add' con valores de tipo int
    result1 = add<int>(2, 3);
    cout << result1 << endl;

    // Llamada a la función 'add' con valores de tipo double
    result2 = add<double>(2.2, 3.3);
    cout << result2 << endl;

    return 0;
}