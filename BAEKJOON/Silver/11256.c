#include <stdio.h>
#include <stdlib.h>

int Compare(int *p, int *q) {
	if (*p > *q) return -1;
	else if (*p < *q) return 1;
	else return 0;
}
int main() {
	int t, j, n;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &j, &n);

		int arr[1000] = { 0 };
		for (int k = 0; k < n; k++) {
			int r, c;
			scanf("%d %d", &r, &c);
			arr[k] = r * c;
		}
		qsort(arr, n, sizeof(int), Compare);

		int cnt = 0;
		for (int k = 0; k < n; k++) {
			if (j <= 0) break;
			j -= arr[k];
			cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}