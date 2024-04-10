#include<iostream>
#include <cstdlib>
using namespace std;

#define MAX 10 // Tamaño máximo del stack
int size = 0; // Variable global para almacenar el tamaño actual del stack

// Estructura para representar un stack
struct stack{
    int items[MAX]; // Arreglo para almacenar elementos del stack
    int top; // Índice del elemento en la cima del stack
};

typedef struct stack st; // Alias para la estructura stack como st

// Función para crear un stack vacío
void createEmptyStack (st *s){
    s->top = -1; // Inicializar el índice de la cima del stack como -1 (indicando stack vacío)
}

// Función para verificar si el stack está lleno
int isfull(st *s){
    if (s->top == MAX - 1) // Si el índice de la cima del stack es igual al tamaño máximo menos 1
        return 1; // El stack está lleno
    else
        return 0; // El stack no está lleno
}

// Función para verificar si el stack está vacío
int isempty (st *s){
    if(s->top == -1) // Si el índice de la cima del stack es -1
        return 1; // El stack está vacío
    else
        return 0; // El stack no está vacío
}

// Función para agregar un elemento al stack (push)
void push(st *s, int newitem){
    if (isfull(s)){ // Verificar si el stack está lleno
        cout << "STACK LLENO"; // Mensaje de error si el stack está lleno
    } else {
        s->top++; // Incrementar el índice de la cima del stack
        s->items[s->top] = newitem; // Agregar el nuevo elemento al stack en la posición de la cima
    }
    size++; // Incrementar el tamaño del stack
}

// Función para eliminar un elemento del stack (pop)
void pop(st *s){
    if (isempty(s)){ // Verificar si el stack está vacío
        cout<< "\n STACK VACIO\n"; // Mensaje de error si el stack está vacío
    } else {
        cout<< "Item sacado= "<< s->items[s->top]; // Imprimir el elemento eliminado del stack
        s->top--; // Decrementar el índice de la cima del stack
    }
    size--; // Decrementar el tamaño del stack
    cout<<endl;
}

// Función para imprimir los elementos del stack
void printStack(st *s){
    printf("Stack: ");
    for (int i = 0; i < size; i++){ // Iterar sobre los elementos del stack
        cout<< s->items[i] <<" "; // Mostrar cada elemento del stack
    }
    cout<<endl;
}

// Función Principal
int main(){
    int ch;
    st *s = (st *) malloc(sizeof(st)); // Asignar memoria para la estructura stack

    createEmptyStack(s); // Crear un stack vacío

    // Agregar elementos al stack
    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);

    printStack(s); // Mostrar los elementos del stack

    pop(s); // Eliminar un elemento del stack

    cout<< "\nDespués de sacar:\n";
    printStack(s); // Mostrar los elementos del stack después de la eliminación

    return 0;
}
