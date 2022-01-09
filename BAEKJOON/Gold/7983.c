#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int d, t;
}work;

int compare(work *p, work *q) {
	if (p->t > q->t) return -1;
	else if (p->t < q->t) return 1;
	else return 0;
}

int main() {
	int n;

	scanf("%d", &n);
	work *arr = (work *)malloc(n * sizeof(work));
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &arr[i].d, &arr[i].t);
	}
	qsort(arr, n, sizeof(work), compare);

	int days = arr[0].t - arr[0].d;
	for (int i = 1; i < n; i++) {
		if (days >= arr[i].t) days = arr[i].t - arr[i].d;
		else days -= arr[i].d;
	}
	printf("%d\n", days);

	free(arr);
	return 0;
}