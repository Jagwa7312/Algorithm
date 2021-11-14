#include <stdio.h>
#include <stdlib.h>

int compare(int *a, int *b);
int main()
{
	int n;

	scanf("%d", &n);
	int *p = (int *)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
		scanf("%d", &p[i]);
	qsort(p, n, sizeof(int), compare);
	for (int i = 0; i < n; i++)
		printf("%d\n", p[i]);
}

int compare(int *a, int *b)
{
	if (*a > *b) return 1;
	else if (*a < *b) return -1;
	else return 0;
}