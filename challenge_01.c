#include <stdio.h>

int main(int argc, char **argv)
{
	float num;

	printf("Please enter a number:\n");
	scanf("%f", &num);

	printf("You input the value %.1f\n", num);

	num *= 5;
	printf("That value multiplied by 5 is %.1f\n", num);

	num /= 3;
	printf("Divide that value by 3 and you get %.1f\n", num);

	return 0;
}
