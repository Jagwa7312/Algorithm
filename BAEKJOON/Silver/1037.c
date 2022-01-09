#include <stdio.h>
#include <stdlib.h>

int Compare(int *p, int *q);
int main()
{
	int n, ar[51];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &ar[i]);

	qsort(ar, n, sizeof(int), Compare);
	printf("%lld\n", ar[0] * ar[n - 1]);

	return 0;
}
int Compare(int *p, int *q)
{
	if (*p > *q) return 1;
	else if (*p < *q) return -1;
	else return 0;
}