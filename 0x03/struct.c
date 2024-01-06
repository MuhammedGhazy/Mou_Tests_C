#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 struct student
    {
        char student_name [20];
        char student_adrees [20];
        float student_age;
        unsigned int student_id;
    };

	struct student Ahmed = {"Ahmed", "Alex", 15.5, 45};

    int main ()
{
	struct student Ali;

   printf("Name = %s\n", Ahmed.student_name);
   printf("adrers = %s\n", Ahmed.student_adrees);
   printf("age = %0.2f\n", Ahmed.student_age);
   printf("id = %i\n", Ahmed.student_id);
	
   memset(Ali.student_name, '\0', 20);
   printf("[%s]\n", Ali.student_name);
   memcpy(Ali.student_name, "Ali Ibrahim", 11);
   printf("Name = %s\n", Ali.student_name);

   memset(Ali.student_adrees, '\0', 20);
   memcpy(Ali.student_adrees,"Cairo", 5);
   printf("Adreese = %s\n", Ali.student_adrees);
    
    
    return (0);
}
