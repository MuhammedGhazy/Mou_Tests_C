#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "platform.h"

#define FILE_CLOSED_SUCCESSFULY 0

typedef struct 
{
	uint8 student_name [50];
	uint16 student_id;
	float32 student_degree;
}student_info;

FILE *ptr = NULL;
student_info student;
uint8 read_student_data [90];

int main()
{
	uint8 fclose_ret = 0;

	ptr = fopen("students.txt", "r");
	if (NULL != ptr)
	{
		printf("Okay, I Can Read The File\n");



	}
	else
	{
		printf("Erorr!!\n");
	}
	fclose_ret = fclose(ptr);
	if (FILE_CLOSED_SUCCESSFULY == fclose_ret)
	{
		printf("File Closed Successfuly\n");
	}
	else
	{
		printf("Erorr!!\n");
	}
	return (0);
}

