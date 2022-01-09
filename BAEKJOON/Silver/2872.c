#include <stdio.h>

int main() {
	int n;
	int book[300000] = { 0 };
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &book[i]);

	int cnt = n;
	for (int i = n - 1; i >= 0; i--)
		if (book[i] == cnt) cnt--;
	printf("%d", cnt);

	return 0;
}