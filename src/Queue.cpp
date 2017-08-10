#include "Queue.h"

Queue::Queue(int buff[], unsigned int buffSize)
{
    //ctor
    Head = 0;
    Tail = 0;

    Buffer = buff;
    BufferSize = buffSize;
}

Queue::~Queue()
{
    //dtor
}

void Queue::Push(int element)
{
    if (!Full()) {
        Buffer[Tail++] = element;
        if (Tail == Size()) {
            Tail = 0;
        }
    }
}

int Queue::Pop()
{
    int element = 0;
    if (!Empty()) {
        element = Buffer[Head++];
        if (Head == Size()) {
            Head = 0;
        }
    }
    return element;
}

bool Queue::Empty()
{
    return Head == Tail;
}

bool Queue::Full()
{
    if (Head < Tail) {
        return (Size() - (Tail - Head)) == 1;
    } else {
        return (Head - Tail) == 1;
    }
}

unsigned int Queue::Size()
{
    return BufferSize;
}
