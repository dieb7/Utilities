#ifndef QUEUE_H
#define QUEUE_H

template <class T>
class Queue
{
public:
    Queue(T buff[], unsigned int buffSize)
    {
        Head = 0;
        Tail = 0;
        Buffer = buff;
        BufferSize = buffSize;
    }

    virtual ~Queue() {}

    void Push(T element)
    {
        if (!Full()) {
            Buffer[Tail++] = element;
            if (Tail == Size()) {
                Tail = 0;
            }
        }
    }

    T Pop()
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

    bool Empty()
    {
        return Head == Tail;
    }

    bool Full()
    {
        if (Head < Tail) {
            return (Size() - (Tail - Head)) == 1;
        } else {
            return (Head - Tail) == 1;
        }
    }
    unsigned int Size()
    {
        return BufferSize;
    }

protected:

private:
    T * Buffer;
    unsigned int BufferSize;

    unsigned int Head;
    unsigned int Tail;
};

#endif // QUEUE_H
