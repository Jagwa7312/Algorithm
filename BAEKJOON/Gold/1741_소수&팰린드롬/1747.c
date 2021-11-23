#include <stdio.h>
#define MAX 1003002

int number[MAX];
void PrimeNumber()
{
	for (int i = 2; i <= MAX; i++)
		number[i] = i;
	for (int i = 2; i <= MAX; i++)
	{
		if (number[i] == 0) continue;
		for (int j = i + i; j <= MAX; j += i)
			number[j] = 0;
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	PrimeNumber();

	for (int i = n; i < MAX; i++)
	{
		int temp = i, idx = 0, flag = 1;
		int arr[7];

		if (number[i] == 0) continue;
		else
		{
			while (temp > 0)
			{
				arr[idx++] = temp % 10;
				temp /= 10;
			}
			int num = arr[0];
			for (int j = 1; j < idx; j++)
				num = num * 10 + arr[j];
		
			if (i != num) flag = 0;
		}
		if (flag)
		{
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}