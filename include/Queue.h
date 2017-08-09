#ifndef QUEUE_H
#define QUEUE_H


class Queue
{
public:
    Queue();
    virtual ~Queue();

    void Push(int element);
    int Pop();

    bool Empty();
    bool Full();
    unsigned int Size();

protected:

private:
    int Buffer[5];

    unsigned int Head;
    unsigned int Tail;
};

#endif // QUEUE_H
