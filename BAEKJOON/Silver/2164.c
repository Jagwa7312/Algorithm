#include <stdio.h>
#define MAX 500000

int main()
{
	int n;
	int queue[MAX];
	scanf("%d", &n);

	int front = 0, rear = n - 1;
	for (int i = 0; i < n; i++)
		queue[i] = i + 1;

	while (1)
	{
		front = (front + 1) % n;
		if (rear == front) break;
		rear = (rear + 1) % n;
		queue[rear] = queue[front];
		front = (front + 1) % n;
		if (rear == front) break;
	}
	printf("%d\n", queue[rear]);
	return 0;
}