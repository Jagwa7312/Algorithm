#include <stdio.h>

int Euclidean(int a, int b);
int main()
{
	int t, a, b;

	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a * b / Euclidean(a, b));
	}
	return 0;
}
int Euclidean(int a, int b)
{
	if (b == 0) return a;
	else Euclidean(b, a % b);
}