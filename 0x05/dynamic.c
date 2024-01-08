#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


int main()
{
	unsigned int *const ptr = (unsigned int *) malloc((10 * sizeof(unsigned int)));
	
	if (NULL == ptr)
	{
		printf(" Invalid!!");
	}
	else
	{
		*ptr = 0x11;
		printf(" The Location = [0x%x], The Value = [%x]\n", ptr, *ptr);

		*(ptr + 1) = 0x55;
		 printf(" The Location = [0x%x], The Value = [%x]\n", ptr, *ptr);
		 printf(" The Location = [0x%x], The Value = [%x]\n", (ptr + 1), *(ptr + 1));

		*(ptr + 3) = 0x33;
		 printf(" The Location = [0x%x], The Value = [%x]\n",(ptr + 3), *(ptr + 3));


	}
	return (0);
}
