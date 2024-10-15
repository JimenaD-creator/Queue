#include <iostream>
#include "Queue.h"
using namespace std;

Queue::Queue(int capacity){
    front = -1; //Indica que la cola está vacía
    rear = -1; //Indica que no hay elementos
    size = capacity; //Capacidad de la cola
    queue = new int[size]; //Asigna memoria dinámica para la cola
}
bool Queue::isEmpty(){
    return front == -1; //retorna true si la cola está vacía

}
bool Queue::isFull(){
   return (rear + 1) % size == front;  // La cola está llena si se "envuelve" y coincide con front.
}
void Queue::enqueue(int value){
    if (isFull()) {
        cout << "\nQueue está lleno.\n";
        return;
    }
    if (isEmpty()) {
        front = 0;  // Si estaba vacía, inicializa front en 0.
    }
    rear = (rear + 1) % size;  // Incrementa rear de manera circular.
    queue[rear] = value;  // Asigna el valor en la posición correspondiente.
    cout << value << " enqueado a la cola.\n";
}
void Queue::dequeue(){
      if (isEmpty()) {
        cout << "\nQueue está vacío.\n";
        return;
    }
    cout << queue[front] << " dequeueado del frente.\n";
    if (front == rear) {  // Si solo había un elemento, reinicia la cola.
        front = rear = -1;
    } else {
        front = (front + 1) % size;  // Incrementa front de manera circular.
    }
}
int Queue::frontElement(){
    if(isEmpty()){
        cout << "\nEmpty queue "<<endl;
        return -1;
    }
    return queue[front]; //Regresa el valor del frente

}
Queue::~Queue(){ //Destructor de memoria
    delete[] queue; //Libera la memoria para la cola cuando el objeto deja de existir
}
