/*
* Atom is a sequence of bytes which are unique, imutable and length
* can be zero or more.
* Mostly atoms are implemented as NULL terminated string, but it can
* be any sequence of arbitrary bytes.
* 
* Two atoms are equal if they point to same location. Hence it is an 
* advantage in comparing equalities.
* Also using atom saves space, as there is only one occurence of the
* sequence.
*
* Atoms are used as keys in data structures that are indexed by
* sequence of arbitrary bytes instead by integers.
*/

/* 
* CHECKED RUNTIME ERRORS:
*	1. Passing NULL pointer to any function
*	2. Passing negative length to Atom_new
*	3. Passing a pointer that is not an atom to Atom_length
*
*/

/*
* UNCHECKED RUNTIME ERRORS
*	1. Modify bytes pointed to by an atom.
*/

/*
* EXCEPTIONS
* 	1. Mem_Failed : raised by Atom_new, Atom_string and Atom_int
*/

#ifndef ATOM_INCLUDED
#define ATOM_INCLUDED

/*
* Atom length returns the length of it's atom argument.
*/
extern int Atom_length(const char *str);

/*
* Atom new accepts a sequence of bytes and the number of bytes in that
* sequence. It adds a copy of the sequence to the table of atoms if
* necessary, and returns the atom which is a pointer to the copy of 
* the sequence in the atom table. Atom_new never returns the NULL 
* pointer. Once an atom is created, it exists for the duration of the 
* client's execution. An atom is always terminated with the NULL 
* string, which Atom_new adds when necessary.
*/
extern const char *Atom_new(const char *str, int len);

/*
* Similar to Atom_new.
* Serves the common need of NULL terminated strings as atoms.
*/
extern const char *Atom_string(const char *str);

/*
* Atom_int returns the atom representation of the long integer.
* Common case scenario.
*/
extern const char *Atom_int(long n);

#endif /* ATOM_INCLUDED */
