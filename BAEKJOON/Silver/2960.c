#include <stdio.h>

int main()
{
	int n, k;
	int num[2000];
	scanf("%d %d", &n, &k);
	for (int i = 2; i <= n; i++)
		num[i] = i;

	int cnt = 0;
	for (int i = 2; i <= n; i++)
		for (int j = i; j <= n; j += i)
		{
			if (num[j] == 0) continue;
			num[j] = 0;
			cnt++;
			if (cnt == k)
			{
				printf("%d\n", j);
				return 0;
			}
		}
}