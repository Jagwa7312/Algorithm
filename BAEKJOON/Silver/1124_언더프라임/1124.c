#include <stdio.h>

int num[100001] = { 0 };
void PrimeNumber(int n);
int main() {
	int A, B, prime = 0;

	scanf("%d %d", &A, &B);
	PrimeNumber(B);

	for (int i = A; i <= B; i++) {
		int cnt = 0, idx = 2, temp = i;
		while (temp > 1) {
			if (num[idx] == 0 || temp % idx != 0) idx++;
			else {
				temp /= idx;
				cnt++;
			}
		}
		if (num[cnt] != 0) prime++;
	}
	printf("%d\n", prime);

	return 0;
}
void PrimeNumber(int n) {
	for (int i = 2; i <= n; i++)
		num[i] = i;

	for (int i = 2; i <= n; i++) {
		if (num[i] == 0) continue;
		for (int j = i + i; j <= n; j += i)
			num[j] = 0;
	}
}