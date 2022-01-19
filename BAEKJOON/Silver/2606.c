#include <stdio.h>

int virus = 0;
int PC[200][200], visit[200];

void check(int num, int pre) {
    for (int i = 0; i < num; i++) {
        if (visit[i] == 0 && PC[pre][i] == 1) {
            visit[i] = 1;
            check(num, i);
            virus++;
        }
    }
}

int main() {
    int com, N;

    scanf("%d\n%d", &com, &N);
    for (int i = 0; i < N; i++) {
        int x, y;

        scanf("%d %d", &x, &y);
        PC[x - 1][y - 1] = 1;
        PC[y - 1][x - 1] = 1;
    }

    visit[0] = 1;
    check(com, 0);

    printf("%d", virus);

    return 0;
}