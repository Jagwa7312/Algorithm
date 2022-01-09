#include <stdio.h>
#define max(a, b) a > b ? a : b

int DP[101][100001];

int main() {
    int N, K;
    int W[101], V[101];

    scanf("%d %d", &N, &K);
    for(int i = 1; i <= N; i++) {
        scanf("%d %d", &W[i], &V[i]);
    }

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= K; j++) {
            if(j < W[i]) {
                DP[i][j] = DP[i - 1][j];
            }

            else {
                DP[i][j] = max(DP[i - 1][j], DP[i - 1][j - W[i]] + V[i]);
            }
        }
    }

    printf("%d", DP[N][K]);
    

    return 0;
}