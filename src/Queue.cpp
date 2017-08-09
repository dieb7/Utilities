#include "Queue.h"

Queue::Queue()
{
    //ctor
    Head = 0;
    Tail = 0;
}

Queue::~Queue()
{
    //dtor
}

void Queue::Push(int element)
{
    Buffer[Tail++] = element;
}

int Queue::Pop()
{
    return Buffer[Head++];
}

bool Queue::Empty()
{
    return Head == Tail;
}

bool Queue::Full()
{
    return (Size() - (Tail - Head)) == 1;
}

unsigned int Queue::Size()
{
    return sizeof(Buffer)/sizeof(Buffer[0]);
}
