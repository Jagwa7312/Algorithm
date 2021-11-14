#include <stdio.h>

int CheckNum(int b, int *p);
int main()
{
	int N, i, j, M, num[4], pos, cnt = 0;

	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		pos = 0;
		for (j = 0; j < 4; j++)
			num[j] = 0;
		M = i;
		while (M != 0)
		{
			num[pos++] = M % 10;
			M /= 10;
		}
		if (CheckNum(pos, num) == 1)
			cnt++;
	}
	printf("%d", cnt);

	return 0;
}
int CheckNum(int b, int *p)
{
	int m, n;

	switch (b)
	{
		case 1: case 2:
			return 1;
		case 3:
		{
			m = *p - *(p + 1);
			n = *(p + 1) - *(p + 2);
			if (m == n) return 1;
		}
		default: return 0;
	}
}