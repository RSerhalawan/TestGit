#include <stdio.h>
#include "printtext.h"

int main(void)
{
	char test[] = "Test this line again...\n";
	int i = 0;
	printtext("Hello World");
	while(test[i] != '\0')
	{
		putc(test[i], stdout);
		i++;
	}
	return 0;
}
