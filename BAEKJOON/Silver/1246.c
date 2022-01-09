#include <stdio.h>
#include <stdlib.h>

int Compare(int *p, int *q) {
	if (*p > *q) return -1;
	else if (*p < *q) return 1;
	else return 0;
}
int main() {
	int n, m;
	int price[1000] = { 0 };
	scanf("%d %d", &n, &m);

	for (int i = 0; i < m; i++)
		scanf("%d", &price[i]);
	qsort(price, m, sizeof(int), Compare);

	int max = 0, idx, egg;
	egg = (m < n) ? m : n;
	for (int i = 0; i < egg; i++) {
		int total = price[i] * (i + 1);
		if (max < total) {
			max = total;
			idx = i;
		}
	}
	printf("%d %d\n", price[idx], max);

	return 0;
}