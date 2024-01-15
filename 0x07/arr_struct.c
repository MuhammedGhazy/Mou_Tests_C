#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char student_name [30];
	unsigned int student_id;
	float student_degree;

}student_t;

student_t student [2] = {

	{
		"Mohamed Ghazii",
		11,
		2.30
	},

	{
		"Ahmed Elsaba",
		12,
		3.20
	}

};

student_t student_1 [2] = {

	{
		.student_id = 15,
		.student_degree = 3.10,
		.student_name = "Maged samy"
	},
	{
		.student_degree = 2.60,
		.student_name = "Nour Esam",
		.student_id = 17
	}


};


int main()
{
	strcpy(student[0].student_name, "Mahmoude Hesham");
	student[0].student_id = 14;
	student[0].student_degree = 1.20;

	return (0);
}
