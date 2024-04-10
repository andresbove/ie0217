#include<iostream>
using namespace std;

int main(){
    int num; // Variable para almacenar el número total de estudiantes
    cout << "Enter total number of students: ";
    cin >> num; // Solicitar al usuario que ingrese el número total de estudiantes
    float* ptr; // Declarar un puntero de tipo flotante

    // Reserva de memoria dinámica para el número 'num' de flotantes
    ptr = new float[num];

    cout<< "Enter GPA of students. " << endl;
    // Ciclo para ingresar las calificaciones GPA de los estudiantes
    for (int i=0; i < num; ++i){
        cout << "Student" << i+1 <<": ";
        cin >> *(ptr+i); // Almacenar la calificación GPA de cada estudiante en el arreglo dinámico
    }

    cout<<"\nDisplaying GPA of students"<<endl;
    // Ciclo para mostrar las calificaciones GPA de los estudiantes
    for (int i=0; i < num; ++i){
        cout<< "Student"<< i+1 << ": "<< *(ptr+i)<<endl; // Mostrar la calificación GPA de cada estudiante
    }

    // Liberar la memoria asignada dinámicamente
    delete[] ptr;

    return 0;
}
