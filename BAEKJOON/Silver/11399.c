#include <stdio.h>
#include <stdlib.h>

int compare(int *p, int *q);
int main() {
	int n;
	int arr[1000] = { 0 };
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	qsort(arr, n, sizeof(int), compare);

	int total = 0, time = 0;
	for (int i = 0; i < n; i++) {
		total += arr[i];
		time += total;
	}
	printf("%d\n", time);

	return 0;
}
int compare(int *p, int *q) {
	if (*p > *q) return 1;
	else if (*p < *q) return -1;
	else return 0;
}