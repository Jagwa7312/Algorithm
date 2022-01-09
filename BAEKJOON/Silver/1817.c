#include <stdio.h>

int main() {
	int n, m;
	int arr[50] = { 0 };

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int box = 0, total = 0;
	for (int i = 0; i < n; i++) {
		total += arr[i];
		if (total > m) {
			box++;
			i--;
			total = 0;
		}
		else if (total == m) {
			box++;
			total = 0;
		}
	}

	if (total > 0 && total < m) box++;
	printf("%d\n", box);

	return 0;
}