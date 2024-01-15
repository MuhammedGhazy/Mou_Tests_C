#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
        char father_name [30];
        char mother_name[30];
        char home_adress [50];

}student_info;

typedef struct student{
	struct student *std_friend;
	student_info student_info;
        char student_name [30];
        unsigned int student_id;
        float student_degree;

}student_t;

student_t ahmed, mohamed;


int main()
{
	ahmed.std_friend = &mohamed;

	printf("Adress of Mohamed Is 0x%x \n", &mohamed);
	printf("The Adress In Pointer Of Mohamed Is 0x%x \n", ahmed.std_friend);
	
	strcpy(mohamed.student_info.father_name, "Ghazii Allithy");

	printf("%s\n", ahmed.std_friend->student_info.father_name);

	return (0);
}
