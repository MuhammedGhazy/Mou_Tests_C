#include <stdio.h>
#include "main.h"

int main ()
{
	char s [] = {"Mohamed Ghazii"};

	printf("%s\n", s);
	rev_str(s);
	printf("%s", s);

	return (0);
}
