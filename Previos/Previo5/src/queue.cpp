#include<iostream>
#define SIZE 5 // Tamaño máximo del Queue
using namespace std;

class Queue{
    private:
    int items[SIZE]; // Arreglo para almacenar elementos del Queue
    int front, rear; // Índices de frente y atrás del Queue

    public:
    Queue(){ // Constructor de la clase Queue
        front = -1; // Inicializar el índice de frente como -1 (indicando Queue vacío)
        rear = -1;  // Inicializar el índice de atrás como -1 (indicando Queue vacío)
    }
    
    // Función para verificar si el Queue está lleno
    bool isFull(){
        if (front == 0 && rear == SIZE - 1){ // El frente está en el inicio y el final está en el último índice
            return true; // El Queue está lleno
        }
        return false; // El Queue no está lleno
    }
    
    // Función para verificar si el Queue está vacío
    bool isEmpty(){
        if (front == -1) // El frente está en -1 (indicando Queue vacío)
            return true; // El Queue está vacío
        else
            return false; // El Queue no está vacío
    }
    
    // Función para agregar un elemento al final del Queue (enqueue)
    void enQueue(int element){
        if (isFull()){ // Verificar si el Queue está lleno
            cout << "El queue está lleno" << endl; // Mensaje de error si el Queue está lleno
        } else {
            if (front == -1) // Si el Queue está vacío, ajustar el índice de frente
                front = 0;
            rear++; // Incrementar el índice de atrás
            items[rear] = element; // Agregar el elemento al final del Queue
            cout << "Insertado " << element << endl; // Mensaje de éxito
        }
    }
    
    // Función para eliminar un elemento del frente del Queue (dequeue)
    int deQueue(){
        int element;
        if (isEmpty()){ // Verificar si el Queue está vacío
            cout << "El queue está vacío" << endl; // Mensaje de error si el Queue está vacío
            return(-1); // Devolver -1 como indicador de error
        } else {
            element = items[front]; // Almacenar el elemento del frente en la variable 'element'
            if (front >= rear){ // Si el Queue tiene solo un elemento
                front = -1; // Reiniciar el índice de frente
                rear = -1;  // Reiniciar el índice de atrás
            } else {
                front++; // Avanzar el índice de frente
            }
            cout << "Borrado " << element << endl; // Mensaje de éxito
            return(element); // Devolver el elemento eliminado
        }
    }
    
    // Función para mostrar los elementos del Queue
    void Display(){
        int i;
        if (isEmpty()){ // Verificar si el Queue está vacío
            cout << "Queue vacío" << endl; // Mensaje de error si el Queue está vacío
        } else {
            cout << "Indice Frontal -> " << front << endl; // Mostrar el índice de frente
            cout << "Items -> "; // Encabezado de los elementos
            for (i = front; i <= rear; i++) // Iterar sobre los elementos en el Queue
                cout << items[i] << " "; // Mostrar cada elemento
            cout << endl << "Indice de Atras -> " << rear << endl; // Mostrar el índice de atrás
        }
    }
};

int main(){
    Queue q;

    // Intento de dequeue cuando el Queue está vacío
    q.deQueue();

    // Enqueue de 5 elementos
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);
    
    // Intento de enqueue cuando el Queue está lleno
    q.enQueue(6);

    q.Display(); // Mostrar los elementos del Queue

    // Dequeue para eliminar el primer elemento
    q.deQueue();

    q.Display(); // Mostrar los elementos del Queue después de la eliminación

    return 0;
}
