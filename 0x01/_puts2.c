#include "main.h"
#include <stdio.h>

void _puts2 (char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
		{
			putchar (s[i]);
		}
	//	putchar('\n');
	}
}
