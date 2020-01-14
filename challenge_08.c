#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 20

struct person {
	char name[SIZE];
	int age;
};

struct person *alloc_person(char *in_name, int in_age);
void free_person(struct person *p);
void display_person(struct person *p);

int main(void)
{
	struct person *p;
	char in_name[SIZE];
	int in_age;

	printf("Please enter a name\n");
	fgets(in_name, SIZE, stdin);

	printf("Please  enter an age\n");
	scanf("%d", &in_age);
	
	p = alloc_person(in_name, in_age);
	display_person(p);
	free_person(p);

	return 0;
}

struct person *alloc_person(char *in_name, int in_age)
{
	struct person *p;

	p = (struct person *)malloc(sizeof(struct person));
	if (!p) {
		printf("Unable to allocate structure person\n");
		exit(1);
	}

	strcpy(p->name, in_name);
	if (p->name[strlen(in_name) - 1] == '\n')
		p->name[strlen(in_name) - 1] = 0;
	p->age = in_age;

	return p;
}

void free_person(struct person *p)
{
	free(p);
}

void display_person(struct person *p)
{
	printf("Person: name=%s age=%d\n", p->name, p->age);
}
