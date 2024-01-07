#include <stdio.h>
#include <stdlib.h>

typedef union {
	unsigned int student_id;
	float student_degree;
}student_t;

student_t Ahmed;
student_t *ptr;

int main ()
{
	
	ptr = &Ahmed;
	Ahmed.student_id = 11;

	printf("%i \n", Ahmed.student_id);

	Ahmed.student_degree = 33.77;
	printf("%0.2f \n", Ahmed.student_degree);

	ptr->student_id = 99;
	printf("%i \n", ptr->student_id);
	        printf("%i \n", Ahmed.student_id);
	(*ptr).student_degree = 33.55;
	        printf("%0.2f \n", Ahmed.student_degree);

	return (0);
}
