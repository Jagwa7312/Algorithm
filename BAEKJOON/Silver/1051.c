#include <stdio.h>

int main()
{
	int n, m, min, max;
	char quad[50][50];
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%s", quad[i]);

	min = (n < m) ? n : m;
	for (int i = 0; i < min; i++)
			for (int j = 0; j < n - i; j++)
				for (int k = 0; k < m - i; k++)
					if (quad[j][k] == quad[j + i][k + i] && quad[j][k] == quad[j + i][k] && quad[j][k] == quad[j][k + i])
						max = i + 1;
	printf("%d\n", max * max);

	return 0;
}