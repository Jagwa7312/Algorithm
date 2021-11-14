#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int loca, color;
}point;
int Compare(point *p, point *q);
int main()
{
	int n;
	scanf("%d", &n);
	point *ar = (point *)malloc(n * sizeof(point));
	int *line = (int *)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
		scanf("%d %d", &ar[i].loca, &ar[i].color);
	qsort(ar, n, sizeof(point), Compare);

	int idx = 0, sum = ar[1].loca - ar[0].loca;
	for (int i = 1; i < n; i++)
	{
		int a = 100000, b = 100000;
		if (ar[i].color == ar[i - 1].color) a = ar[i].loca - ar[i - 1].loca;
		if (ar[i].color == ar[i + 1].color) b = ar[i + 1].loca - ar[i].loca;
		line[i] = (a > b) ? b : a;
		sum += line[i];
	}
	printf("%d\n", sum);
	free(ar), free(line);

	return 0;
}
int Compare(point *p, point *q)
{
	if (p->color > q->color) return 1;
	else if (p->color < q->color) return -1;
	else
	{
		if (p->loca > q->loca) return 1;
		else return 0;
	}
	return 0;
}