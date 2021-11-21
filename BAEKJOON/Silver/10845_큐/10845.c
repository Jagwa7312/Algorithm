#include <stdio.h>
#include <string.h>

int idx = 0;
int queue[100001];
void push(int a)
{
	queue[idx++] = a;
}
void pop()
{
	if (idx != 0)
	{
		idx--;
		printf("%d\n", queue[0]);
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
void front()
{
	if (idx != 0) printf("%d\n", queue[0]);
	else printf("-1\n");
}
void back()
{
	if (idx != 0) printf("%d\n", queue[idx - 1]);
	else printf("-1\n");
}
void setting()
{
	for (int i = 0; i < idx; i++)
		queue[i] = queue[i + 1];
}
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		char com[6];
		scanf("%s", com);
		if (strcmp(com, "push") == 0)
		{
			int t;
			scanf("%d", &t);
			push(t);
		}
		else if (strcmp(com, "pop") == 0)
		{
			pop();
			setting();
		}
		else if (strcmp(com, "size") == 0) size();
		else if (strcmp(com, "empty") == 0) empty();
		else if (strcmp(com, "front") == 0) front();
		else if (strcmp(com, "back") == 0) back();
	}
	return 0;
}