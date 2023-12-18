#include <stdio.h>
#include "main.h"

unsigned int num1 = 5;
unsigned int num2 = 7;
unsigned int num3 = 10;

int main()
{
	unsigned char Erorr_Stat = 0;

	printf(" %i\t %i\t %i\t\n",num1, num2, num3);

	Erorr_Stat = Get_square(&num1, &num2, &num3);
	if (1 == Erorr_Stat)
	{
		printf("Erorr !!\n");
	}
	printf(" %i\t %i\t %i\t",num1, num2, num3);
	
	return (0);
}
