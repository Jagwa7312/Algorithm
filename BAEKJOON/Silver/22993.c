#include <stdio.h>
#include <stdlib.h>

int compare(long long *p, long long *q);
int main() {
	int n;
	long long j;
	long long arr[100000] = { 0 };

	scanf("%d\n%lld", &n, &j);
	for (int i = 0; i < n - 1; i++)
		scanf("%lld", &arr[i]);

	qsort(arr, n - 1, sizeof(long long), compare);

	for (int i = 0; i < n - 1; i++) {
		if (j <= arr[i]) {
			printf("No\n");
			return 0;
		}
		j += arr[i];
	}
	printf("Yes\n");

	return 0;
}
int compare(long long *p, long long *q) {
	if (*p > *q) return 1;
	else if (*p < *q) return -1;
	else return 0;
}