#include <stdio.h>
#define MAX 10001

int arr[MAX] = { 0 };
int main() {
	int n, num;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		arr[num]++;
	}

	for (int i = 0; i <= MAX; i++) {
		if (arr[i] == 0) continue;
		for (int j = 0; j < arr[i]; j++)
			printf("%d\n", i);
	}
	return 0;
}