#include "Queue.h"

//CppUTest includes should be after your and system includes
#include "CppUTest/TestHarness.h"

TEST_GROUP(Queue)
{
    Queue* queue;

    void setup() {
        queue = new Queue();
    }
    void teardown() {
        delete queue;
    }
};

TEST(Queue, Size)
{
    CHECK_EQUAL(5, queue->Size());
}

TEST(Queue, StartEmpty)
{
    CHECK(queue->Empty());
}

TEST(Queue, StartNotFull)
{
    CHECK(!queue->Full());
}

TEST(Queue, pushNotEmpty)
{
    queue->Push(3);
    CHECK(!queue->Empty());
}

TEST(Queue, pushPopSimple)
{
    queue->Push(5);
    queue->Push(4);
    queue->Push(3);

    CHECK_EQUAL(5, queue->Pop());
    CHECK_EQUAL(4, queue->Pop());
    CHECK_EQUAL(3, queue->Pop());
}

TEST(Queue, pushToFull0)
{
    queue->Push(5);
    queue->Push(4);
    queue->Push(3);
    CHECK(!queue->Full());
    queue->Push(2);
    CHECK(queue->Full());

    CHECK_EQUAL(5, queue->Pop());
    CHECK_EQUAL(4, queue->Pop());
    CHECK_EQUAL(3, queue->Pop());
    CHECK_EQUAL(2, queue->Pop());
}

TEST(Queue, pushToFull1)
{
    queue->Push(5);
    queue->Pop();
    queue->Push(4);
    queue->Push(3);
    queue->Push(2);
    CHECK(!queue->Full());
    queue->Push(1);
    CHECK(queue->Full());

    CHECK_EQUAL(4, queue->Pop());
    CHECK_EQUAL(3, queue->Pop());
    CHECK_EQUAL(2, queue->Pop());
    CHECK_EQUAL(1, queue->Pop());
}

TEST(Queue, pushToFull2)
{
    queue->Push(5);
    queue->Pop();
    queue->Push(4);
    queue->Pop();

    queue->Push(3);
    queue->Push(2);
    queue->Push(1);
    CHECK(!queue->Full());
    queue->Push(0);
    CHECK(queue->Full());

    CHECK_EQUAL(3, queue->Pop());
    CHECK_EQUAL(2, queue->Pop());
    CHECK_EQUAL(1, queue->Pop());
    CHECK_EQUAL(0, queue->Pop());
}
