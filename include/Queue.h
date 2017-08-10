#ifndef QUEUE_H
#define QUEUE_H


class Queue
{
public:
    Queue(int buff[], unsigned int buffSize);
    virtual ~Queue();

    void Push(int element);
    int Pop();

    bool Empty();
    bool Full();
    unsigned int Size();

protected:

private:
    int * Buffer;
    unsigned int BufferSize;

    unsigned int Head;
    unsigned int Tail;
};

#endif // QUEUE_H
