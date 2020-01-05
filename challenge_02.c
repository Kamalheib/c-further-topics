#include <stdio.h>

int main(int argc, char **argv)
{
	int num;

	printf("Please enter a number greater than zero:\n");
	scanf("%d", &num);

	if (num < 1) {
		printf("Error: the number isn't greater then zero!\n");
		return 1;
	}

	printf("The number is %s\n", (num % 2 == 0) ? "even" : "odd");

	return 0;
}
