#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc == 1) {
		printf("Error: No command line arguments passed\n");
		return 1;
	}

	printf("I will examping file %s\n", argv[1]);

	return 0;
}
