/*
* Demo Interface for the Arithmatic Library.
*
* Interface defines the set of functions or variables that are exposed
* to the client. An interface can have multiple implementations
* running on back of it, used one at a time.
*
* Interface name(or a part of it) is prefixed to the identifier names
* in the interface to avoid namespace pollution.
*/

#ifndef ARITH_H
#define ARITH_H

extern int Arith_max(int x, int y);
extern int Arith_min(int x, int y);
extern int Arith_div(int x, int y);
extern int Arith_mod(int x, int y);
extern int Arith_ceiling(int x, int y);
extern int Arith_floor(int x, int y);

#endif /* ARITH_H */
