#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int arrival, check;
}cow;

int compare(cow *p, cow *q) {
	if (p->arrival > q->arrival) return 1;
	else if (p->arrival < q->arrival) return -1;
	else {
		if (p->check < q->check) return 1;
		else return -1;
	}
	return 0;
}

int main() {
	int n;
	cow arr[100];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d %d", &arr[i].arrival, &arr[i].check);
	qsort(arr, n, sizeof(cow), compare);

	int total = 0;
	for (int i = 0; i < n; i++) {
		if (total < arr[i].arrival) total = arr[i].arrival;
		total += arr[i].check;
	}
	printf("%d\n", total);

	return 0;
}