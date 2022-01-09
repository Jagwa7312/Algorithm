#include <stdio.h>

int main()
{
	int n, i = 665, temp, cnt = 0;

	scanf("%d", &n);
	while (cnt != n)
	{
		i++;
		temp = i;
		while (temp != 0)
		{
			if (temp % 1000 == 666)
			{
				cnt++;
				break;
			}
			else temp /= 10;
		}
	}
	printf("%d", i);

	return 0;
}