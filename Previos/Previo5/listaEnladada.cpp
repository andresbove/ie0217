// Se incluyen las bibliotecas necesarias para el código
#include<bits/stdc++.h> // Incluye todas las bibliotecas estándar de C++
#include<iostream>
using namespace std;

// Se define la clase 'Node' para representar los nodos de la lista enlazada
class Node{
    public:
    int value;      // Valor del nodo
    Node* next;     // Puntero al siguiente nodo
};

int main(){
    Node* head;     // Puntero al primer nodo de la lista
    Node* one = NULL;   // Punteros a tres nodos, inicializados como nulos
    Node* two = NULL;
    Node* three = NULL;

    // Asignando memoria dinámica para los tres nodos
    one = new Node();
    two =  new Node();
    three = new Node();

    // Asignando valores a los nodos
    one->value = 1;
    two->value = 2;
    three->value = 3;

    // Conectando los nodos enlazados
    one->next = two;
    two->next = three;
    three->next = NULL; // El último nodo apunta a NULL, indicando el final de la lista

    // Imprimir la lista enlazada comenzando desde el primer nodo
    head = one; // Apuntamos el puntero 'head' al primer nodo
    while (head != NULL){ // Mientras no lleguemos al final de la lista
        cout << head->value; // Imprimimos el valor del nodo actual
        head = head->next; // Avanzamos al siguiente nodo
    }
}
