#include <iostream>
#include "Queue.h"
using namespace std;

int main(){
    Queue q(5);  // Cola de tamaño 5.

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    cout << "Elemento al frente: " << q.frontElement() << endl;

    q.dequeue();
    q.dequeue();

    q.enqueue(50);  // Enquea más valores.
    q.enqueue(60);  // Aquí se debe reutilizar el espacio gracias a la circularidad.

    cout << "Elemento al frente: " << q.frontElement() << endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();  // Vacía la cola.
    

}