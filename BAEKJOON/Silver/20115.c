#include <stdio.h>
#include <stdlib.h>

int compare(int *p, int *q);
int main() {
	int n;
	int drink[100000] = { 0 };

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &drink[i]);
	}
	qsort(drink, n, sizeof(int), compare);

	double total = drink[0];
	for (int i = 1; i < n; i++) {
		total += drink[i] / 2.0;
	}
	printf("%.1lf\n", total);

	return 0;
}
int compare(int *p, int *q) {
	if (*p > *q) return -1;
	else if (*p < *q) return 1;
	else return 0;
}