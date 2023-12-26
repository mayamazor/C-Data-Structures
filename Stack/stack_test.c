#include <stddef.h> /* size_t */
#include <stdio.h> /* printf */

#include "stack.h"

void TestCreate();
void TestPush();
void TestPop();
void TestPeek();

int main()
{	
    TestCreate();
    TestPush();
    TestPop();
    TestPeek();
    printf("The Tests Passed\n");
	
	return 0;
}

void TestCreate()
{
    size_t capacity = 8;
    stack_t* stack = Create(capacity);
    assert(stack != NULL);
    Destroy(stack);
}

void TestPush()
{
    size_t capacity = 8;
    stack_t* stack = Create(capacity);
    assert(GetSize(stack) == 0);
    int x = 10;
	int y = 20;
	int z = 30;
    Push(stack, &x);
    Push(stack, &y);
    Push(stack, &z);
    assert(GetSize(stack) == 3);
    Destroy(stack);
}

void TestPop()
{
    size_t capacity = 8;
    stack_t* stack = Create(capacity);
    assert(GetSize(stack) == 0);
    int x = 10;
	int y = 20;
	int z = 30;
    Push(stack, &x);
    Push(stack, &y);
    Push(stack, &z);
    assert(GetSize(stack) == 3);

    Pop(stack);
    assert(GetSize(stack) == 2);

    Pop(stack);
    assert(GetSize(stack) == 1);

    Pop(stack);
    assert(GetSize(stack) == 0);

    Destroy(stack);
}

void TestPeek()
{
    size_t capacity = 8;
    stack_t* stack = Create(capacity);
    int* p = NULL;
    assert(GetSize(stack) == 0);
    int x = 10;
	int y = 20;
	int z = 30;
    Push(stack, &x);
    Push(stack, &y);
    Push(stack, &z);
    assert(GetSize(stack) == 3);

    p = (int*)Peek(stack);
    assert(*p == 30);
    Pop(stack);

    p = (int*)Peek(stack);
    assert(*p == 20);
    assert(GetSize(stack) == 2);

    Destroy(stack);
}