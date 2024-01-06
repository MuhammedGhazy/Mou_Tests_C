#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

 typedef struct{
                char student_name[20];
                float student_degree;
                unsigned short student_id;
        }studen_t;
        studen_t Ali ;
        studen_t *ptr = NULL;

int main()
{
	ptr = &Ali;
	
	strcpy(ptr->student_name, "Ali Ghazy"); 
	ptr->student_degree = 55.5;
	ptr->student_id = 7;

	printf("Name   : %s\n", ptr->student_name);
	printf("degree : %0.2f\n", ptr->student_degree);
	printf("id     : %d\n", ptr->student_id);
	return (0);
}
