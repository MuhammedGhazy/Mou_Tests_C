#include "main.h"


void rev_str (char *s)
{
	int i, l;
	char temp;

	for (i = 0; s[i] != '\0'; ++i)
		for (l = 0; l < i / 2; l++)
		{
			temp = s[i];
			s[i] = s[l - 1 - i];
			s[l - 1 - i] = temp;
		}
}
