#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

typedef struct {
	char student_name [30];
	unsigned int student_id;
	float student_degree;
}student_t;

student_t Ahmed = {"Ahmed Ibrahim", 22, 2.3};
student_t *ptr = NULL;

void print_student (student_t *ptr_stu);
void print_student_data (student_t student);

int main()
{
	ptr = (student_t *) malloc(sizeof(student_t));
	if(ptr != NULL)
	{
		strcpy(ptr->student_name, "MUhammed Ghazii");
		ptr->student_id = 11;
		ptr->student_degree = 3.4;

		print_student(ptr);
		printf("===================\n");
		print_student_data(Ahmed);
		printf("===================\n");
		print_student(&Ahmed);
	}
	else
	{
		printf("Error!! \n");
	}


	free(ptr);

	return(0);
}

void print_student (student_t *ptr_stu)
{
	printf("Student Name is   : %s \n", ptr_stu->student_name);
        printf("Student ID is     : %i \n", ptr_stu->student_id);
        printf("Student Degree is : %0.2f \n", ptr_stu->student_degree);
}

/*this function is not recomnded because the copy data in the stacke and open more frames
 *  without refrance make error in the memory.
*/
void print_student_data (student_t student)
{
	 printf("Student Name is   : %s \n", student.student_name);
         printf("Student ID is     : %i \n ", student.student_id);
         printf("Student Degree is : %0.2f \n", student.student_degree);
}

