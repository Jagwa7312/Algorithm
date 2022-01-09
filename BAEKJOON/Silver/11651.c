#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int x, y;
}dot;

#define MAX 100001
dot sorted[MAX];

void merge(dot a[], int m, int middle, int n);
void mergeSort(dot a[], int m, int n);
int main()
{
	int t;

	scanf("%d", &t);
	dot *arr = (dot *)malloc(t * sizeof(dot));
	for (int i = 0; i < t; i++)
		scanf("%d %d", &arr[i].x, &arr[i].y);
	mergeSort(arr, 0, t - 1);
	for (int i = 0; i < t; i++)
		printf("%d %d\n", arr[i].x, arr[i].y);
	free(arr);

	return 0;
}
void merge(dot a[], int m, int middle, int n)
{
	int i = m;
	int j = middle + 1;
	int k = m;

	while (i <= middle && j <= n)
	{
		if (a[i].y < a[j].y) sorted[k++] = a[i++];
		else if (a[i].y > a[j].y) sorted[k++] = a[j++];
		else
		{
			if (a[i].x > a[j].x) sorted[k++] = a[j++];
			else if (a[i].x < a[j].x) sorted[k++] = a[i++];
		}
	}
	if (i > middle)
		for (int t = j; t <= n; t++)
			sorted[k++] = a[t];
	else
		for (int t = i; t <= middle; t++)
			sorted[k++] = a[t];
	for (int t = m; t <= n; t++)
		a[t] = sorted[t];
}
void mergeSort(dot a[], int m, int n)
{
	int middle = (m + n) / 2;

	if (m < n)
	{
		mergeSort(a, m, middle);
		mergeSort(a, middle + 1, n);
		merge(a, m, middle, n);
	}
}