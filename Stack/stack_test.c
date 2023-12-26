#include <stddef.h> /* size_t */
#include <stdio.h> /* printf */

#include "stack.h"

void TestCreate();
void TestPush();

int main()
{	
    TestCreate();
	/*size_t capacity = 8;
	int x = 10;
	int y = 20;
	int z = 30;
	size_t size1 = 0;
	size_t capacity1 = 0;
	struct stack *Stack = StackCreate(capacity);
	 
	StackPush(Stack, &x);
    StackPush(Stack, &y);
    StackPush(Stack, &z);
    
    printf("%d peek from stack\n", *(int*)StackPeek(Stack));
    
    size1 = StackSize(Stack);
  	printf("%ld the size \n",size1);
  	
    StackPop(Stack);
    
    printf("%d peek from stack\n", *(int*)StackPeek(Stack));
  
  	size1 = StackSize(Stack);
  	printf("%ld the size \n",size1);
   
   	capacity1 = StackCapacity(Stack);
	printf("%ld the capacity \n",capacity1);

	StackDestroy(Stack);*/
	return 0;
}

void TestCreate()
{
    size_t capacity = 8;
    stack_t* stack = Create(capacity);
    assert(stack != NULL);
}

void TestPush()
{
    
}