/*
* ADT or Abstract Data Type is the interface in which the data
* type defined is abstracted from the clients. This could be done to 
* hide implementation details from the clients.
*
* Here First we define a macro T which represents the Stack_T type.
* That macro is created just for use within the interface and is
* undefined at the end of the interface.
*
* Stack_T is a typedef to an Opague pointer. By this we mean that, 
* only  the implementation has the ability to use the inards of the
* pointer. Clients can modift the pointer but cannot look into it.
*/

#ifndef STACK_INCLUDED
#define STACK_INCLUDED

#define T Stack_T

typedef struct T *T;

extern T Stack_new(void);
extern int Stack_empty(T stk);
extern void Stack_push(T stk, void *x);
extern void *Stack_pop(T stk);
extern void Stack_free(T stk);

#undef T

#endif /* STACK_INCLUDED */
