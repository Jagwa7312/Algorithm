#include <stdio.h>
#include <stdbool.h>

int result[3], grid[2200][2200];

bool check(int row, int col, int num) {
    int start = grid[row][col];

    for (int i = row; i < row + num; i++) {
        for (int j = col; j < col + num; j++) {
            if (start != grid[i][j]) {
                return false;
            }
        }
    }

    return true;
}

void divide(int row, int col, int num) {
    if (check(row, col, num)) {
        result[grid[row][col]]++;
    }

    else {
        int size = num / 3;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                divide(row + size * i, col + size * j, size);
            }
        }
    }
}

int main() {
    int N;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int T;

            scanf("%d", &T);
            grid[i][j] = ++T;
        }
    }
    divide(0, 0, N);

    printf("%d\n%d\n%d", result[0], result[1], result[2]);

    return 0;
}