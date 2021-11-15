#include <stdio.h>

int main()
{
	int n, m, min = 64;
	char ch[51][51];
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
			scanf("%s", &ch[i]);

	for (int i = 0; i < n - 7; i++)
		for (int j = 0; j < m - 7; j++)
		{
			int cntB = 0, cntW = 0;
			for (int col = i; col < i + 8; col++)
				for (int row = j; row < j + 8; row++)
				{
					if ((col + row) % 2 == 0)
					{
						if (ch[col][row] == 'B') cntW++;
						else cntB++;
					}
					else
					{
						if (ch[col][row] == 'B') cntB++;
						else cntW++;
					}
				}
			min = (min < cntB) ? min : cntB;
			min = (min < cntW) ? min : cntW;
		}
	printf("%d\n", min);

	return 0;
}