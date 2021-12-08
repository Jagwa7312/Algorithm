#include <stdio.h>
#include <stdlib.h>

int compare(int *p, int *q);
int main() {
	int n;
	int arr[500001] = { 0 };
	
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &arr[i]);
	qsort(arr, n + 1, sizeof(int), compare);

	long long total = 0;
	for (int i = 1; i <= n; i++)
		total += (i > arr[i]) ? i - arr[i] : arr[i] - i;
	printf("%lld\n", total);

	return 0;
}
int compare(int *p, int *q) {
	if (*p > *q) return 1;
	else if (*p < *q) return -1;
	else return 0;
}