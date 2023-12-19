#include "main.h"
#include <stdio.h>

unsigned char square (unsigned int *Ptr)
{
	unsigned char error = 0;
	if ( NULL == Ptr)
	{
		error = 1;
		printf("Error !!\n");
	}
	else 
	{
		*Ptr *= *Ptr;
	}
	return (error);
}
