#include <stdio.h>
#include <string.h>

int first = 0, rear = -1;
int queue[2000001];
void push(int a)
{
	queue[++rear] = a;
}
void pop()
{
	(rear - first + 1 != 0) ? printf("%d\n", queue[first++]) : printf("-1\n");
}
void size()
{
	printf("%d\n", rear - first + 1);
}
void empty()
{
	(rear - first + 1 == 0) ? printf("1\n") : printf("0\n");
}
void front()
{
	(rear - first + 1 != 0) ? printf("%d\n", queue[first]) : printf("-1\n");
}
void back()
{
	(rear - first + 1 != 0) ? printf("%d\n", queue[rear]) : printf("-1\n");
}
int main()
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		char com[6];
		scanf("%s", com);
		if (strcmp(com, "push") == 0)
		{
			int n;
			scanf("%d", &n);
			push(n);
		}
		else if (strcmp(com, "pop") == 0) pop();
		else if (strcmp(com, "size") == 0) size();
		else if (strcmp(com, "empty") == 0) empty();
		else if (strcmp(com, "front") == 0) front();
		else if (strcmp(com, "back") == 0) back();
	}
	return 0;
}