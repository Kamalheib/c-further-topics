#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare( const void *a, const void *b);

#define SIZE 80

int main(int argc, char **argv)
{
	char input[SIZE];
	int i;

	printf("Please type a string\n");
	fgets(input, SIZE, stdin);
	qsort(input, strlen(input), sizeof(char), compare);

	printf("sorted string %s\n", input);
	return 0;
}

int compare( const void *a, const void *b)
{
	return ( *(char *)a - *(char *)b);
}
