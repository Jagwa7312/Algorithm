#include <stdio.h>

int main()
{
	int n, m, i, j, min, cnt = 0, total = 0;

	scanf("%d\n%d", &n, &m);
	for (i = n; i <= m; ++i)
	{
		for (j = 2; j < i; ++j)
			if (i % j == 0) break;
		if (i == j)
		{
			cnt++;
			total += i;
			if (cnt == 1) min = i;
		}
	}
	if (cnt == 0) printf("-1");
	else printf("%d\n%d", total, min);

	return 0;
}