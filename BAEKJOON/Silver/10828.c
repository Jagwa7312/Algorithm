#include <stdio.h>
#include <string.h>

int num[10001];
int idx = 0;
void push(int a);
void pop();
void size();
void empty();
void top();
int main()
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		char stack[10];
		scanf("%s", stack);

		if (strcmp(stack, "push") == 0)
		{
			int n;
			scanf("%d", &n);
			push(n);
		}
		else if (strcmp(stack, "pop") == 0)
			pop();
		else if (strcmp(stack, "size") == 0)
			size();
		else if (strcmp(stack, "empty") == 0)
			empty();
		else if (strcmp(stack, "top") == 0)
			top();
	}
	return 0;
}
void push(int a)
{
	num[idx] = a;
	idx++;
}
void pop()
{
	if (idx != 0)
	{
		idx--;
		printf("%d\n", num[idx]);
		num[idx] = 0;
	}
	else printf("-1\n");
}
void size()
{
	printf("%d\n", idx);
}
void empty()
{
	if (idx != 0) printf("0\n");
	else printf("1\n");
}
void top()
{
	if (idx != 0) printf("%d\n", num[idx - 1]);
	else printf("-1\n");
}