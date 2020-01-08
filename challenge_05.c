#include <stdio.h>
#include <math.h>

int *prime5(void)
{
	static int prime[] = {2, 3, 5, 7, 11};

	return prime;
}

int main(int argc, char *argv)
{
	int i;
	int *prime_arr = prime5();

	printf("The prime numbers are\n");
	for (i = 0; i < 5; i++)
		printf("%d\n\n", prime_arr[i]);

	return 0;
}
