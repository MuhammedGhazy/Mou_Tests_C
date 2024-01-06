#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student_type {
	char student_name [30];
	float student_degree;
	unsigned short student_id;
};

struct student_type Mohamed = {"Mohamed Ghazii",
	3.4,
	72
};

struct student_type Ahmed = {"Ahmed Ghazii",
        2.2,
        55
};

struct student_type Ali;


struct student_type karim = {
	.student_name = "karim ardoghan",
	.student_degree = 3.1,
	.student_id = 32
};

int main ()
{
	strcpy  (Ali.student_name, "Ali Alsayd");
	printf("%s\n", Ali.student_name);
	printf("=============================\n");

	printf("%s\n", karim.student_name);
	printf("%0.2f\n", karim.student_degree);
	printf("%i\n", karim.student_id);
	printf("=============================\n");

	 printf("%s\n", Mohamed.student_name);
	 printf("%0.2f\n", Mohamed.student_degree);
	  printf("%i\n", Mohamed.student_id);
	printf("=============================\n");

	  printf("sizeof obj %li\n", sizeof(Mohamed));

	return (0);
}
