#include <stdio.h>

int main(int argc, char **argv)
{
	int num;

	printf("Please enter an integer\n");
	scanf("%d", &num);

	printf("The entered number is %.1f\n", (float)num);

	return 0;
}
