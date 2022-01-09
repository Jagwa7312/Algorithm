#include <stdio.h>

int main()
{
	int n, i, num, cnt = 0;

	scanf("%d", &n);
	while (n--)
	{
		scanf("%d", &num);
		for (i = 2; i < num; i++)
			if (num % i == 0) break;
		if (i == num) cnt++;
	}
	printf("%d\n", cnt);

	return 0;
}