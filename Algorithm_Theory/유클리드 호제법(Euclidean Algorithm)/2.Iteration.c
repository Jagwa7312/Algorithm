#include <stdio.h>

int Euclidean(int a, int b)
{
	int temp;

	while (1)
	{
		temp = b;
		b = a % b;
		a = temp;
		if (b == 0) break;
	}
	return a;
}
int main()
{
	int GCD = Euclidean(55, 22);
	printf("GCD : %d\n", GCD);

	return 0;
}