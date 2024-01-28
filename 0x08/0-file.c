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
uint8 read_student_data [64];

void fetch_student_data (student_info *ptr_student, uint8 *student_data);
void print_studen_info(student_info *ptr_student_t);

int main()
{
	uint8 fclose_ret = 0;
	unsigned int i = 0;
	ptr = fopen("college.txt", "r");
	if (NULL != ptr)
	{
		printf("Okay, I Can Read The File\n");
	//	for(i = 0; i < 3; i++)
	//	{
	while(fgets(read_student_data, sizeof(read_student_data),ptr) != NULL)
	{
			
	//		printf("Data is : %s\n", read_student_data);
		//	printf("Data is : %c\n", read_student_data[36]);
		//	printf("Data is : %c\n", read_student_data[37]);
		//	printf("===============================\n");
			fetch_student_data(&student, read_student_data);
//			print_studen_info(&student);
	}


	}
	else
	{
		printf("Erorr!!\n");
	}
	fclose_ret = fclose(ptr);
	if (FILE_CLOSED_SUCCESSFULY == fclose_ret)
	{
		printf("File Closed Successfuly-EOF.\n");
	}
	else
	{
		printf("Erorr!!\n");
	}
	return (0);
}
void fetch_student_data (student_info *ptr_student, uint8 *student_data)
{
	uint8 student_id_str [3] = {0};
	uint8 student_name_str [17] = {0};
	uint8 student_degree_str [4] = {0};

	strncpy(student_id_str, student_data + 40, 2);
	printf("=> Id is %s\n", student_id_str);
	strncpy(student_name_str, student_data + 11, 14);
	printf("=> Name is %s\n", student_name_str);
	strncpy(student_degree_str, student_data + 57, 3);
	printf("=> Degree is %s\n", student_degree_str);

	ptr_student->student_id = atoi (student_id_str);
	ptr_student->student_degree = atof (student_degree_str);
	strcpy(ptr_student->student_name, student_name_str);

}
void print_studen_info(student_info *ptr_student_t)
{
	printf("=========================\n");
	printf("Student Name Is   : %s\n", ptr_student_t->student_name);
	printf("Student ID Is     : %i\n", ptr_student_t->student_id);
	printf("Student Degree Is : %0.2f\n", ptr_student_t->student_degree);
	printf("==========================\n");
}
