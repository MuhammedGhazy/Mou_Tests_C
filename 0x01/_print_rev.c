#include "main.h"
#include <stdio.h>


void print_rev (char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
