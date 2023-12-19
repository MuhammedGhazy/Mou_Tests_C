#include "main.h"
#include <stdio.h>

void puts_half (char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; s[i] != '\0'; i++)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
