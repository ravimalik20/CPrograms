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

/***********************************************************************
*	Showing the use of some of the predefined macros.
*
*	__LINE__ : Line number of file being compiled.
*	__FILE__ : Name of the file being compiled.
*	__DATE__ : Date on which program was compiled. (mm dd yyyy)
*	__TIME__ : Time of Compilation.
*	__STDC__ : 1 if compiler confirms to C standard, c89 or c99.
************************************************************************/

#include<stdio.h>

#define SHOW_INFO printf("Name of the file being comiled:%s\n",__FILE__),\
		printf("Date Compiled:%s\n",__DATE__),\
		printf("Time Compiled:%s\n",__TIME__),\
		printf("Line Number being Compiled:%d\n",__LINE__),\
		__STDC__?printf("Compiled on a standard C Compiler.\n"):printf("Compiled on a non-standard C compiler.\n")

int main(void)
{	SHOW_INFO;

	return 0;
}
		
