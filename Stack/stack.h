#ifndef __STACK_H__
#define __STACK_H__

#include <stddef.h>
#include <assert.h> /* assert*/

typedef struct stack stack_t;

/* create a new Stack */
stack_t *Create(size_t );

/* add member */
void Push(stack_t *, void *);

/* remove the first member */
void Pop(stack_t *);

/* get the first member */
void *Peek(stack_t *);

/* get size of Stack */
size_t GetSize(stack_t *);

/* The amount of values in the stack */
size_t GetCapacity(stack_t *);

/* if  stack is empty */
int IsEmpty(stack_t *);

/* destroy the stack */
void Destroy(stack_t *);

#endif /* __EX12_H__*/