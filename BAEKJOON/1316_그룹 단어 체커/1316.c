#include <stdio.h>
#include <string.h>

int main()
{
	int n, cnt = 0;
	char str[101];

	scanf("%d", &n);
	while (n--)
	{
		scanf("%s", str);
		int flag = 0;
		for (int i = 0; i < strlen(str) - 1; i++)
			if (str[i] != str[i + 1])
				for (int j = i + 2; j < strlen(str); j++)
					if (str[i] == str[j]) flag++;
		if (flag == 0) cnt++;
	}
	printf("%d\n", cnt);

	return 0;
}