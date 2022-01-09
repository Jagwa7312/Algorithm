#include <stdio.h>
#define MAX 10001

int SelfNumber(int a);
int main()
{
	int i, idx;
	int num[MAX] = { 0 };

	for (i = 1; i < MAX; i++)
	{
		idx = SelfNumber(i);
		if (idx <= 10000) num[idx] = 1;
	}
	for (i = 1; i < MAX; i++)
		if (!num[i]) printf("%d\n", i);

	return 0;
}
int SelfNumber(int a)
{
	int result = a;

	while (a > 0)
	{
		result += a % 10;
		a /= 10;
	}

	return result;
}