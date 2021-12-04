#include <stdio.h>

int main() {
	int n, d, cnt = 0;
	scanf("%d %d", &n, &d);

	for (int i = 1; i <= n; i++) {
		int temp = i;
		while (temp > 0) {
			if (temp % 10 == d) cnt++;
			temp /= 10;
		}
	}
	printf("%d\n", cnt);

	return 0;
}