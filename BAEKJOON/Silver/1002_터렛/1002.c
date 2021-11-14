#include <stdio.h>
#include <math.h>

int main()
{
	int T, x1, x2, y1, y2, r1, r2, flag;
	double dis, sub;

	scanf("%d", &T);
	while (T--)
	{
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		sub = r1 > r2 ? r1 - r2 : r2 - r1;

		if (dis == 0 && r1 == r2) flag = -1;
		else if (r1 + r2 > dis && sub < dis) flag = 2;
		else if (r1 + r2 == dis || sub == dis) flag = 1;
		else flag = 0;
		printf("%d\n", flag);
	}

	return 0;
}