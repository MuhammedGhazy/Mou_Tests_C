#include "main.h"
#include <stdio.h>


void _puts (char *s)
{
	while (*s != '\0')
	{
		putchar(*s + 0);
		s++;
	}
	putchar('\n');
}
