#include <stdio.h>
#include <stdlib.h>

int compare(int *p, int *q) {
	if (*p > *q) return -1;
	else if (*p < *q) return 1;
	else return 0;
}

int main() {
	int n, p, cnt = 0;
	int arr[50] = { 0 };

	scanf("%d\n%d", &n, &p);
	for (int i = 0; i < n - 1; i++)
		scanf("%d", &arr[i]);

	while (1) {
		int flag = 1;

		for (int i = 0; i < n - 1; i++)
			if (p <= arr[i]) flag = 0;
		if (flag == 1) break;

		qsort(arr, n, sizeof(int), compare);

		arr[0]--;
		p++;
		cnt++;
	}
	printf("%d\n", cnt);
}