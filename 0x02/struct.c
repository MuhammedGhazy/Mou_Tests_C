#include <stdio.h>
#include <stdlib.h>
#include "types.h"


struct student_type {
	unsigned short student_id;
	char student_name [30];
	float student_degree;
};

struct student_type mohamed,ibrahim;
struct student student_1;


int main ()
{
	struct student_type ahmed;
	struct student_type ali;
	struct student_type sayd,ramy;
	struct student student_2;
	struct student_1 {
		unsigned short id;
		char name [30];
		float degree;
	};
	struct student_1 omar;

	return (0);
}

void func_1 (void)
{
	struct student_type mostafa;
	/* Error this local structure type. */
//	struct student_1 karem;
}
