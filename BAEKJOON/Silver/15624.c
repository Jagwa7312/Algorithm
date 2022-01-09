#include <stdio.h>

int DP[1000001];

int fib(int x) {
    if(x == 0) {
        return 0;
    }
    if(x == 1) {
        return 1;
    }
    if(DP[x] != 0) {
        return DP[x];
    }

    return DP[x] = (fib(x - 1) + fib(x - 2)) % 1000000007;
}

int main() {
    int N;
    
    scanf("%d", &N);

    printf("%d", fib(N));
    
    return 0;
}