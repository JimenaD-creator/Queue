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
    return rear == size-1; //La cola está llena cuando rear es igual al último índice del arreglo
}
void Queue::enqueue(int value){
    if(isFull()){
        cout << "\nQueue esta lleno " <<endl;
    }
    if(front == -1){ //Si la cola está vacía
        front = 0; //Mueve el front a 0
    }
    queue[++rear] = value;  //Incrementar rear y asigna el nuevo valor
    cout << value << "\nenque to queue ";

}
void Queue::dequeue(){
    if(isEmpty()){
        cout << "\nempty queue " <<endl;
        return;
    }
    cout << queue[front] << "\ndequeue front ";
    front ++;  //Se recorre a la derecha de la memoria

    if(front > rear){ //Se reinicia la cola
        front = -1;
        rear = -1;
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
