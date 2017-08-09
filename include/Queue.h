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
    int Buffer[15];
};

#endif // QUEUE_H
