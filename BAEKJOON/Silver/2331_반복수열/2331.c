#include <stdio.h>
#define MAX 1000

int main()
{
	int a, p;
	int ar[MAX] = { 0 };

	scanf("%d %d", &a, &p);
	ar[0] = a;
	for (int i = 1; i < MAX; i++)
	{
		int temp = ar[i - 1];
		while (temp > 0)
		{
			int sum = 1, n = temp % 10;
			for (int j = 0; j < p; j++)
				sum *= n;
			ar[i] += sum;
			temp /= 10;
		}
	}
	int idx;
	for (int i = 0; i < MAX; i++)
	{
		int flag = 0;
		for (int j = i + 1; j < MAX; j++)
			if (ar[i] == ar[j])
			{
				flag = 1, idx = i;
				break;
			}
		if (flag == 1) break;
	}
	printf("%d\n", idx);

	return 0;
}