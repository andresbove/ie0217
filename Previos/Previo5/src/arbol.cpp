#include <iostream>
using namespace std;

// Se define la estructura del nodo del árbol
struct Node{
    int data;
    struct Node* left;  // Puntero al hijo izquierdo
    struct Node* right; // Puntero al hijo derecho
    Node(int data){      // Constructor para inicializar un nodo con un valor dado
        this -> data = data;
        left = right = NULL;
    }
};

// Función para recorrer el árbol en preorden
void preorderTraversal(struct Node* node){
    if(node == NULL)
        return;
    cout << node->data << "->"; // Imprimir el valor del nodo
    preorderTraversal(node->left);  // Se recorre el subárbol izquierdo
    preorderTraversal(node->right); // Se recorre el subárbol derecho
}

// Función para recorrer el árbol en postorden
void postorderTraversal(struct Node* node){
    if (node == NULL)
        return;
    postorderTraversal(node->left);  // Se recorre el subárbol izquierdo
    postorderTraversal(node->right); // Se recorre el subárbol derecho
    cout << node->data << "->"; // Se imprime el valor del nodo
}

// Función para recorrer el árbol en inorden
void inorderTraversal(struct Node* node){
    if(node == NULL)
        return;
    inorderTraversal(node->left);   // Se recorre el subárbol izquierdo
    cout << node->data << "->";     // Se imprime el valor del nodo
    inorderTraversal(node->right);  // Se recorre el subárbol derecho
}

int main(){
    // Se crea el árbol
    struct Node* root = new Node(1);
    root -> left = new Node(12);
    root -> right = new Node(9);
    root -> left -> left = new Node(5);
    root -> left -> right = new Node(6);

    // Impresión de los recorridos del árbol
    cout << " Inorder Traversal ";
    inorderTraversal(root);
    cout << "\n Preorder Traversal ";
    preorderTraversal(root);
    cout << "\n Postorder Traversal ";
    postorderTraversal(root);
    return 0;
}
