#include "Queue.h"

//CppUTest includes should be after your and system includes
#include "CppUTest/TestHarness.h"

TEST_GROUP(Queue)
{
    Queue* queue;

    void setup()
    {
        queue = new Queue();
    }
    void teardown()
    {
        delete queue;
    }
};

TEST(Queue, Create)
{
    FAIL("Start here");
}

