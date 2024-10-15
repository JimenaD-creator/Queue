#include <iostream>
using namespace std;

class Queue{
    private:
    int front;
    int rear; //Cola
    int size;
    int *queue;

    public:
    Queue(int capacity);
    bool isEmpty();
    bool isFull();
    void enqueue(int value);
    void dequeue();
    int frontElement();
    ~Queue();

};