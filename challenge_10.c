#include <stdio.h>
#include <string.h>

int main()
{
	char *s = "Hello World!";
	int len;
	int i;

	for (i = 0; i < strlen(s); i++)
		putchar(*(s + i));
	putchar('\n');

	return 0;
}
