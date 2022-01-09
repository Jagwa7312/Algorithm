#include <stdio.h>
#define MAX 246913

int a[MAX];
int PrimeNumber(int m, int n);
int main()
{
	int N;
	
	while (1)
	{
		scanf("%d", &N);
		if (!N) break;
		PrimeNumber(N, 2 * N);
	}
	return 0;
}
int PrimeNumber(int m, int n)
{
	int cnt = 0;

	for (int i = 2; i <= MAX; i++)
		a[i] = i;
	for (int i = 2; i <= MAX; i++)
	{
		if (a[i] == 0) continue;
		for (int j = i + i; j <= MAX; j += i)
			a[j] = 0;
	}
	for (int i = m + 1; i <= n; i++)
		if (a[i] != 0) cnt++;
	printf("%d\n", cnt);
}