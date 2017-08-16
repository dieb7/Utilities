#include "Stack.h"

//CppUTest includes should be after your and system includes
#include "CppUTest/TestHarness.h"

TEST_GROUP(Stack)
{
    Stack* stack;

    void setup() {
        stack = new Stack();
    }
    void teardown() {
        delete stack;
    }
};

TEST(Stack, Create)
{
    FAIL("Start here");
}

