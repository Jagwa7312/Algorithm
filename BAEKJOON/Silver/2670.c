#include <stdio.h>
#define max(a, b) a > b ? a : b

double arr[10001];

int main() {
    int N;
    double ans = 0;

    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        scanf("%lf", &arr[i]);
    }
    ans = arr[1];

    for (int i = 2; i <= N; i++) {
        if (arr[i] * arr[i - 1] >= arr[i]) {
            arr[i] *= arr[i - 1];
        }
        ans = max(ans, arr[i]);
    }

    printf("%.3lf", ans);

    return 0;
}