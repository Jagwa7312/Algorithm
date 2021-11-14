#include <stdio.h>

int main()
{
	int k, n, idx = 0;
	int arr[100001] = { 0 };

	scanf("%d", &k);
	for (int i = 0; i < k; )
	{
		scanf("%d", &n);
		if (n == 0) arr[--idx] = 0, k--;
		else arr[idx++] = n, i++;
	}
	int sum = 0;
	for (int i = 0; i < k; i++)
		sum += arr[i];
	printf("%d\n", sum);

	return 0;
}