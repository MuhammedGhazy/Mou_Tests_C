#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

unsigned int *ptr = NULL;

int main()
{
	ptr=(unsigned int *)malloc(5 * sizeof(unsigned int));
	if(ptr != NULL)
	{
		*ptr=0x11;
		printf("0x%x \n", ptr);
		printf("0x%x \n", *ptr);
		free(ptr);
		printf("0x%x \n", ptr);
             printf("0x%x \n", *ptr);
	}
	else{
		printf("InValid!!\n");
	}

	return (0);
}
