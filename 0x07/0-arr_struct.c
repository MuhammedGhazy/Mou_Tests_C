#include <stdio.h>
#include <stdlib.h>

typedef struct {
        char student_name [30];
        unsigned int student_id;
        float student_degree;

}student_t;

student_t students [2];
void get_student_info (student_t students_f [], unsigned char arr_size);

int main()
{

	get_student_info(students, 2);
	return (0);
}

void get_student_info (student_t students_f [], unsigned char arr_size)
{
	unsigned char counter = 0;
	int c = 0;

	for (counter = 0; counter < arr_size; counter++)
	{
		printf("Please Enter Student %i Name :", counter );
        gets(students_f[counter].student_name);


		printf("Please Enter Student %i Id :", counter );
		scanf("%u", &(students_f[counter].student_id));


		printf("Please Enter Student %i Degree :", counter);
                scanf("%f", &(students_f[counter].student_degree));
		fflush(stdin);

	}
}
