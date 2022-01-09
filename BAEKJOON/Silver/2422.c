#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, m, total = 1;
	scanf("%d %d", &n, &m);

	int cnt = 0, exc[202][202] = { 0 };
	while (m--)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		exc[a][b] = b;
		exc[b][a] = b;
	}

	for (int i = 1; i <= n; i++)
		for (int j = i + 1; j <= n; j++)
		{
			if (exc[i][j] != 0) continue;
			for (int k = j + 1; k <= n; k++)
				if (exc[i][k] == 0 && exc[j][k] == 0) cnt++;
		}
	printf("%d\n", cnt);

	return 0;
}