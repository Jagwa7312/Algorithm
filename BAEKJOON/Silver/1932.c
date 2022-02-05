#include <stdio.h>
#define max(a, b) a > b ? a : b

int m = 0;
int tri[510][510], dp[510][510];

int main() {
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            scanf("%d", &tri[i][j]);
        }
    }

    dp[1][1] = tri[1][1];

    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            dp[i][j] = max(dp[i - 1][j - 1] + tri[i][j], dp[i - 1][j] + tri[i][j]);
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (m < dp[i][j]) {
                m = dp[i][j];
            }
        }
    }

    printf("%d", m);
    
    return 0;
}