#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int weight, height;
}Person;

int main()
{
	int n, cnt;
	Person *p;

	scanf("%d", &n);
	p = (Person *)malloc(sizeof(Person) * n);
	for (int i = 0; i < n; i++)
		scanf("%d %d", &p[i].weight, &p[i].height);
	for (int i = 0; i < n; i++)
	{
		cnt = 1;
		for (int j = 0; j < n; j++)
			if (p[i].weight < p[j].weight && p[i].height < p[j].height) cnt++;
		printf("%d ", cnt);
	}

	return 0;
}