#include <stdlib.h> /* malloc */
#include <stdio.h> /* printf*/

#include "stack.h"

struct stack
{
	size_t capacity;
	size_t top;
	void **elements;
};

/*****************************************************************************/
stack_t *Create(size_t capacity)
{
	stack_t *newStack = (stack_t*)malloc(sizeof(stack_t));
	
	if(!newStack)
	{
		return NULL;
	}
	
	newStack -> capacity = capacity;
	newStack -> top = 0;
	newStack -> elements = (void **)malloc(capacity * sizeof(void*));
	
	if (!newStack -> elements)
	{
		return NULL;
	}
	
	return newStack;
}

/*****************************************************************************/
void Destroy(stack_t *stack)
{
	assert(stack);
	free(stack -> elements);
	free(stack);	
}
/*****************************************************************************/
void Pop(stack_t *stack)
{	
	assert(stack);
	if(!IsEmpty(stack))
	{
		--(stack -> top) ;
	}
	
}
/*****************************************************************************/
void Push(stack_t *stack, void *element)
{
	assert(stack);
	if(stack -> top < stack ->capacity)
	{
		stack -> elements[stack -> top] = element;
		++(stack -> top);  
	}
}
/*****************************************************************************/
void *Peek(stack_t *stack)
{
	assert(stack);
	if(!IsEmpty(stack))
	{
		return(stack -> elements[(stack -> top) - 1]);
	}
	return NULL;
}

/*****************************************************************************/
size_t GetSize(stack_t *stack)
{
	assert(stack);
	return(stack -> top );
}
/*****************************************************************************/
int IsEmpty(stack_t *stack)
{
	assert(stack);
	return (stack->top == 0);
}
/*****************************************************************************/
size_t GetCapacity(stack_t *stack)
{
	assert(stack);
	return(stack -> capacity);
}

/*****************************************************************************/
