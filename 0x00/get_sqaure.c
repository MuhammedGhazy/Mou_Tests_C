#include <stdio.h>
#include "main.h"

unsigned char Get_square (unsigned int *Ptr_Num1, unsigned int *Ptr_Num2, unsigned int *Ptr_Num3)
{
	unsigned char erorr_ret = 0;

	if( (Ptr_Num1 == NULL) || (Ptr_Num2 == NULL) || (Ptr_Num3 == NULL))
	{
		erorr_ret = 1;
	}
	else
	{
		*Ptr_Num1 *= *Ptr_Num1;
		*Ptr_Num2 *= *Ptr_Num2;
		*Ptr_Num3 *= *Ptr_Num3;
	}

	return (erorr_ret);
}	

