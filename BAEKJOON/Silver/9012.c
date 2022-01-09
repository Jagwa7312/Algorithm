#include <stdio.h>
#include <string.h>

int stack[51];
int idx = 0;
void push(char a)
{
	stack[idx++] = a;
}
void pop()
{
	stack[--idx] = 0;
}
int empty()
{
	return idx == 0;
}
int main()
{
	int t;
	char str[51];
	scanf("%d", &t);
	while (t--)
	{
		int flag = 1;
		scanf("%s", str);
		for (int i = 0; i < strlen(str); i++)
		{
			if (str[i] == '(') push(str[i]);
			else
			{
				if (empty())
				{
					flag = 0;
					break;
				}
				else pop();
			}
		}
		if (!empty()) flag = 0;
		while (!empty()) pop();
		if (flag == 1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}