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
student_t mostafa;

void print_student (student_t *ptr_stu);
void print_student_data (student_t student);
void get_student_data(student_t *student_info);
student_t get_student (void);


int main()
{
	ptr = (student_t *) malloc(sizeof(student_t));
	if(ptr != NULL)
	{
		strcpy(ptr->student_name, "MUhammed Ghazii");
		ptr->student_id = 11;
		ptr->student_degree = 3.4;

		print_student(ptr);
	//	printf("===================\n");
	//	print_student_data(Ahmed);
	//	printf("===================\n");
	//	print_student(&Ahmed);
	//	printf("====================\n");
		get_student_data(&mostafa,);
		printf("====================\n");
	//	mostafa = get_student();
          //      printf("====================\n");
	//	print_student_data(mostafa);

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

void get_student_data(student_t *student_info)
{	
	printf("Please Enter Student Name : ");
	gets(&(student_info->student_name));
	printf("Please Enter Student Id   : ");
        scanf("%u", &(student_info->student_id));
        printf("Please Enter Student Degree: ");
        scanf("%f", &(student_info->student_degree));
	
}


/*this functions is not recomnded because the copy data in the stacke and open more frames
 *  without refrance make error in the memory.
 *  and the func gets not recomended.
*/
/*void print_student_data (student_t student)
{
	 printf("Student Name is   : %s \n", student.student_name);
         printf("Student ID is     : %i \n ", student.student_id);
         printf("Student Degree is : %0.2f \n", student.student_degree);
}

student_t get_student (void)
{
	student_t std_D;

	 printf("Enter Student Name    :");
	gets(std_D.student_name);
         printf("Enter Student ID      :");
	scanf("%u",&(std_D.student_id));
         printf("Enter Student Degree  :");
	scanf("%f",&(std_D.student_degree));
	return (std_D);
}*/

