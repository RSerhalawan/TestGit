#include <stdio.h>
#include "printtext.h"

void printtext(char *text)
{
	int i = 0;
	putc('\n', stdout);
	while(text[i] != '\0')
	{
		putc(text[i], stdout);
		i++;
	}
	putc('\n', stdout);
}
