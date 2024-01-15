#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char student_name[30];
	unsigned int student_id;
	void (*ptr_func) (void);
}student_t;

student_t ahmed;

void print_student_info_v1 (void);
void print_student_info_v2 (void);

int main()
{
	strcpy(ahmed.student_name, "Muhammed Ghazii");
	ahmed.student_id = 11;
	ahmed.ptr_func = print_student_info_v2;
	ahmed.ptr_func ();

	return (0);
}

void print_student_info_v1 (void)
{
	printf("%s\n", ahmed.student_name);
	printf("%u \n", ahmed.student_id);
}

void print_student_info_v2 (void)
{
        printf("=>%s\n", ahmed.student_name);
        printf("=>%u \n", ahmed.student_id);
}

