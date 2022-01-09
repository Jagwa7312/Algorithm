#include <stdio.h>

int Euclidean(int a, int b) {
	if (b == 0) return a;
	else Euclidean(b, a % b);
}
int main() {
    int n, m;

    scanf("%d %d", &n, &m);
    
	printf("%d", m - Euclidean(n, m));
	return 0;
}