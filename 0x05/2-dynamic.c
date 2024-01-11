#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

unsigned int **ptr = NULL;
unsigned int rows = 0;
unsigned clos = 0;

int main ()
{

	unsigned int rows_counter = 0, cols_counter = 0;
	
	printf("Please Enter The Number of Rows \n");
	scanf("%i", &rows);
	printf("Please Enter The Number Of Colnlons \n");
        scanf("%i", &clos);

	ptr = (unsigned int **) malloc (rows * sizeof(unsigned int *));

	for(rows_counter = 0; rows_counter < rows; rows_counter++)
	{
		ptr  [rows_counter] = (unsigned int* )malloc (clos * sizeof (unsigned int));
	}

	for(rows_counter = 0; rows_counter < rows; rows_counter++)
	{
		printf("0x%X \n", ptr[rows_counter]);
	}

        for(rows_counter = 0; rows_counter < rows; rows_counter++)
	{

		for(cols_counter = 0; cols_counter < clos; cols_counter++)
		{
			ptr[rows_counter][cols_counter] = 0x99;
			
		}

	}


	for(rows_counter = 0; rows_counter < rows; rows_counter++)
	{

                for(cols_counter = 0; cols_counter < clos; cols_counter++)
		{
			printf("0x%X", ptr[rows_counter][cols_counter]);
		}
		putchar('\n');
	}
	putchar('\n');
	

	  for(rows_counter = 0; rows_counter < rows; rows_counter++)
        {
 		printf("0x%X \n", ptr  [rows_counter]);
        }
	 for(rows_counter = 0; rows_counter < rows; rows_counter++)
	 {
		free(ptr[rows_counter]);
	 }
	free(ptr);


	return (0);
}

