#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int age;
	int idx;
	char name[101];
} person;

int compare(person *a, person *b);
int main()
{
	int n;

	scanf("%d", &n);
	person* p = (person *)malloc(sizeof(person) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %s", &p[i].age, &p[i].name);
		p[i].idx = i;
	}
	qsort(p, n, sizeof(person), compare);
	for (int i = 0; i < n; i++)
		printf("%d %s\n", p[i].age, p[i].name);

	return 0;
}

int compare(person *a, person *b)
{
	if (a->age > b->age) return 1;
	else if (a->age < b->age) return -1;
	else
	{
		if (a->idx < b->idx) return -1;
		else return 1;
	}
		return 0;
}