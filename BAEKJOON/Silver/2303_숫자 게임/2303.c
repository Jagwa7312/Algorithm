#include <stdio.h>

int main()
{
	int n, idx = 0;
	int ar[1000][5] = { 0 }, choose[1000] = { 0 };

	scanf("%d", &n);
	while (idx < n)
	{
		int max = 0;
		scanf("%d %d %d %d %d", &ar[idx][0], &ar[idx][1], &ar[idx][2], &ar[idx][3], &ar[idx][4]);
		for (int i = 0; i < 5; i++)
			for (int j = i + 1; j < 5; j++)
				for (int k = j + 1; k < 5; k++)
				{
					int sum = ar[idx][i] + ar[idx][j] + ar[idx][k];
					if (sum % 10 > max) max = sum % 10;
				}
		choose[idx] = max;
		idx++;
	}
	int max = 0;
	for (int i = 0; i < n; i++)
		if (choose[i] > max) max = choose[i];
	for (int i = n - 1; i >= 0; i--)
		if (choose[i] == max)
		{
			printf("%d\n", i + 1);
			break;
		}
	return 0;
}