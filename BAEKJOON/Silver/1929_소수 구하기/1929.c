#include <stdio.h>
#define MAX 1000001

int number[MAX];
void PrimeNumber(int n, int m);
int main()
{
	int a, b;

	scanf("%d %d", &a, &b);
	PrimeNumber(a, b);

	return 0;
}
void PrimeNumber(a, b)
{
	for (int i = 2; i <= MAX; i++)
		number[i] = i;
	for (int i = 2; i <= MAX; i++)
	{
		if (number[i] == 0) continue;
		for (int j = i + i; j <= MAX; j += i)
			number[j] = 0;
	}
	for (int i = a; i <= b; i++)
		if (number[i] != 0) printf("%d\n", number[i]);
}