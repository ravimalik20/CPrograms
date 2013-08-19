/*==========================================================================================
||	
||	Copyright (C) 2013  Ravi Malik
||	
||	This program is free software; you can redistribute it and/or
||	modify it under the terms of the GNU General Public License
||	as published by the Free Software Foundation; either version 2
||	of the License, or (at your option) any later version.
||	
||	This program is distributed in the hope that it will be useful,
||	but WITHOUT ANY WARRANTY; without even the implied warranty of
||	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
||	GNU General Public License for more details.
||	
||	You should have received a copy of the GNU General Public License
||	along with this program; if not, write to the Free Software
||	Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
||	
||
*==========================================================================================*/

/*******************************************************************************************
*	Understanding the macros which provide us the feature of conditional compilation.
*
*	Conditional Compiling is most often useful for:
*		Writing Portable Code
*		Writing code which can be compiled using different compilers.
*		Provide default value for a macro. 
********************************************************************************************/

#include<stdio.h>

#if defined(__linux__)
	#define MESSAGE "We are in Linux\n"
#elif defined(__APPLE__)
	#define MESSAGE "We are in Mac\n"
#elif defined(_WIN32)
	#define MESSAGE "We are in Windows\n"
#else
	#define MESSAGE "We are in some unknown environment."
#endif

int main(void)
{	printf(MESSAGE);

	return 0;
}
	
