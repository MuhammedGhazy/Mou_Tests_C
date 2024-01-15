#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define File_Closed_Successfully 0
#define Loop_size 3
FILE *ptr = NULL;
typedef struct {
	unsigned char student_name [30];
	unsigned int student_id;
	float student_degree;
}student_t;

int main()
{
	unsigned char erorr_status = 0;
	unsigned char counter = 0;
	student_t student;

	ptr = fopen("student.txt", "w");
	if(NULL != ptr)
	{
		printf("File Has Been Created.\n");
		for(counter = 0; counter < Loop_size; counter++)
		{
				printf("Enter Student Name \n");
				//fgets(student.student_name, sizeof(student.student_name), stdin);
		//	if(student.student_name[strlen(student.student_name) - 1] == '\n')
		//	{
		//		student.student_name[strlen(student.student_name) - 1] = '\0';
		//	}
		
				gets(student.student_name);	
				printf("Enter Student ID\n");
				scanf("%u", &student.student_id);
				getchar();
				printf("Enter Student Degree\n");
				scanf("%f", &student.student_degree);
				getchar();
				fprintf(ptr, "%i. Name : [%s] - Id Is [%u] - Degree Is [%f].\n", counter, student.student_name,											student.student_id, student.student_degree);
					
					
				}
		}
	
					
	else
	{
		printf("Erorr!!\n");
	}

	erorr_status = fclose(ptr);

	if(File_Closed_Successfully == erorr_status)
	{
		printf("File Closed Successfully.\n");
	}
	else
	{
		printf("Erorr\n");
	}


	return (0);
}
