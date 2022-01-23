#include <stdio.h>
#define max(a, b) a > b ? a : b

int N;
int grid[510][510], dp[510][510];

int dfs(int x, int y) {
    if (dp[x][y] != 0) {
        return dp[x][y];
    }

    int dx[] = {0, 0, 1, -1}, dy[] = {1, -1, 0, 0};

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i], ny = y + dy[i];

        if (!(nx >= 0 && nx < N && ny >= 0 && ny < N)) {
            continue;
        }

        if (grid[x][y] >= grid[nx][ny]) {
            continue;
        }

        dp[x][y] = max(dp[x][y], dfs(nx, ny) + 1);
    }

    return dp[x][y];
}

int main() {
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (dp[i][j] == 0) {
                dp[i][j] = dfs(i, j);
            }
        }
    }

    int max = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (dp[i][j] > max) {
                max = dp[i][j];
            }
        }
    }

    printf("%d", max + 1);

    return 0;
}