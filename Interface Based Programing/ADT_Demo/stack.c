/*
* WARNING : This program is only a demonstration and not meant to be 
* compiled.
*
* Client Responsibilities
* 
* An interface is a cotract between it's implementations and it's 
* clients. Clients must adhere to it and interfaces must enforce it.
* These include all the implicit or explicit rules defined. Implicit 
* rules may be the rules laid out by language, C. And all the rules 
* which are not specified by C must be written in the interface.
*
* Interfaces often specify checked runtime error, unchecked runtime
* error and exceptions. 
* Checked and Unchecked runtime errors are breaches of contract and 
* there is no recovery from these.
* Exceptions are conditions that rarely occur and is possible to 
* recover from them.
*
* Checked runtime errors are breaches that we guarantee to check. These
* may be : passing NULL Stack_T to any routine, passing an empty stack
* to Stack_pop() 
*/

#include<stddef.h>
#include<stdlib.h>
#include<assert.h>
#include"stack.h"

#define T Stack_T

struct T
{	int count;
	struct elem
	{	void *x;
		struct elem *link;
	} *head;
};

/* All the functions go here which can modify the data defined. */
