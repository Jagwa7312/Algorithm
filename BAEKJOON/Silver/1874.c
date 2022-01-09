#include <stdio.h>

int idx_stack = 0;
int stack[100001] = { 0 };
int push(int a)
{
	stack[idx_stack++] = a;
}
int pop()
{
	stack[--idx_stack];
}
int top()
{
	return stack[idx_stack - 1];
}
int main()
{
	int n;
	int arr[100001];
	char str[200001];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int num_seq = 1, idx_arr = 0, idx_str = 0;
	int plus_cnt = 0, minus_cnt = 0;
	while (minus_cnt < n)
	{
		if (arr[idx_arr] != top())
		{
			push(num_seq);
			str[idx_str++] = '+';
			num_seq++;
			plus_cnt++;
		}
		else if (arr[idx_arr] == top())
		{
			pop();
			str[idx_str++] = '-';
			idx_arr++;
			minus_cnt++;
		}
		if (plus_cnt > n)
		{
			printf("NO\n");
			return 0;
		}
	}
	for (int i = 0; i < idx_str; i++)
		printf("%c\n", str[i]);
	return 0;
}