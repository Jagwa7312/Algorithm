#include <stdio.h>
#include <stdlib.h>

int sort[500001];
int arr[8001];
void mergeSort(int a[], int m, int n);
void merge(int a[], int m, int middle, int n);
int main()
{
	int n, idx = 0;
	double mean = 0;

	scanf("%d", &n);
	int *p = (int *)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &p[i]);
		mean += p[i];
		arr[p[i] + 4000]++;
	}
	mergeSort(p, 0, n - 1);
	int max = p[n - 1], min = p[0];
	for (int i = 1; i < 8001; i++)
		if (arr[i] > arr[idx]) idx = i;
	for (int i = idx + 1; i < 8001; i++)
		if (arr[i] == arr[idx])
		{
			idx = i;
			break;
		}
	printf("%.0lf\n%d\n%d\n%d\n", mean / n, p[(n + 1) / 2 - 1], idx - 4000, max - min);
	free(p);

	return 0;
}
void merge(int a[], int m, int middle, int n)
{
	int i = m, j = middle + 1, k = m;

	while (i <= middle && j <= n)
	{
		if (a[i] < a[j]) sort[k++] = a[i++];
		else sort[k++] = a[j++];
	}
	if (i > middle)
		for (int t = j; t <= n; t++)
			sort[k++] = a[t];
	else
		for (int t = i; t <= middle; t++)
			sort[k++] = a[t];
	for (int t = m; t <= n; t++)
		a[t] = sort[t];
}
void mergeSort(int a[], int m, int n)
{
	int middle = (n + m) / 2;

	if (m < n)
	{
		mergeSort(a, m, middle);
		mergeSort(a, middle + 1, n);
		merge(a, m, middle, n);
	}
}