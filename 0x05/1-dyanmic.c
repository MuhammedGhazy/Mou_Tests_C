#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

unsigned int *ptr = NULL;
unsigned int Arr_elme;
int main()
{
	unsigned counter = 0, summing = 0;

	printf("Please Enter Number Of Array Elmenet\n");
	scanf("%i", &Arr_elme);
	ptr=(unsigned int *)malloc(Arr_elme * sizeof(unsigned int));

        if(ptr != NULL)
        {
	for(counter = 0; counter < Arr_elme; counter++){
	ptr[counter] = counter;
	}
	for(counter = 0; counter < Arr_elme; counter++){
         summing += ptr[counter];
	}
	

	 printf("Summing = %i\n", summing);
	free(ptr);
	}
        
        else{
                printf("InValid!!\n");
        }
	
	return (0);

}
