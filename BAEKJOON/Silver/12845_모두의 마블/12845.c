#include <stdio.h>
#include <stdlib.h>

int compare(int *q, int *p);

int main() {
	int n;
	int card[100000] = { 0 };

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &card[i]);
	}
	qsort(card, n, sizeof(int), compare);
	
	int gold = 0, level = card[0];
	for (int i = 1; i < n; i++) {
		gold += level + card[i];
	}
	printf("%d", gold);

	return 0;
}

int compare(int *p, int *q) {
	if (*p > *q) return -1;
	else if (*p < *q) return 1;
	else return 0;
}