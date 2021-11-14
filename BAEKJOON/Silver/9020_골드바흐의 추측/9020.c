#include <stdio.h>
#define MAX 10001

int main()
{
	int num[MAX], arr[MAX];

	for (int i = 2; i < MAX; i++)
		num[i] = i;
	for (int i = 2; i < MAX; i++)
	{
		if (num[i] == 0) continue;
		for (int j = i + i; j < MAX; j += i)
			num[j] = 0;
	}
	int idx = 0;
	for (int i = 0; i < MAX; i++)
		if (num[i] != 0) arr[idx++] = num[i];

	int t, n;

	scanf("%d", &t);
	while (t--)
	{
		int a, b;
		int min = arr[idx - 1] - arr[0];
		scanf("%d", &n);
		for (int i = 0; i < idx; i++)
			for (int j = i; j < idx; j++)
				if (arr[i] + arr[j] == n)
				{
					if (arr[j] - arr[i] < min) a = arr[i], b = arr[j];
					break;
				}
		printf("%d %d\n", a, b);
	}
	return 0;
}