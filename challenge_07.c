#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 80

void convert(char *input)
{
	int i = 0;

	while(input[i]) {
		if (input[i] == ' ')
			input[i] = '_';
		else
			input[i] = toupper(input[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	char input[SIZE];

	printf("Please type a text\n");
	fgets(input, SIZE, stdin);

	printf("The typed text is: %s", input);
	convert(input);
	printf("The converted text is: %s", input);

	return 0;
}
