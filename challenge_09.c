#include <stdio.h>

int main()
{
	int num;
	int *p;

	p = &num;

	*p = 5;

	printf("num=%d\n", *p);
	printf("num=%d\n", ++*p);

	return 0;
}
