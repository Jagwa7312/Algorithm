#include <stdio.h>

int main() {
	for (int i = 0; ;i++) {
		int l, p, v, total = 0;

		scanf("%d %d %d", &l, &p, &v);
		if (l == 0 && p == 0 && v == 0) break;

		total += l * (v / p);
		v %= p;
		total += (v < l) ? v : l;

		printf("Case %d: %d\n", i + 1, total);
	}
	return 0;
}