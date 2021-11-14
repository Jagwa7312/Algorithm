#include <stdio.h>

int Euclidean(int a, int b);
int main()
{
	int n, m, GCD;

	scanf("%d %d", &n, &m);
	printf("%d\n%d", Euclidean(n, m), n * m / Euclidean(n, m));

	return 0;
}
int Euclidean(int a, int b)
{
	return (a % b) ? Euclidean(b, a % b) : b;
}