#include <stdio.h>
#define max(a, b) a > b ? a : b

int seq[100001];

int main() {
    int N;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &seq[i]);
    }

    int max1 = 1;
    int len = 1;
    for (int i = 1; i < N; i++) {
        if (seq[i - 1] <= seq[i]) {
            len++;
        }

        else {
            len = 1;
        }

        max1 = max(max1, len);
    }

    int max2 = 1;
    len = 1;
    for (int i = 1; i < N; i++) {
        if (seq[i - 1] >= seq[i]) {
            len++;
        }

        else {
            len = 1;
        }

        max2 = max(max2, len);
    }

    printf("%d", max(max1, max2));

    return 0;
}