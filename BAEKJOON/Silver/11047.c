#include <stdio.h>

int main() {
    int n, k;
    int arr[10] = { 0 };

    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int cnt = 0;
    for (int i = n - 1; i >= 0; i--) {
        cnt += k / arr[i];
        k %= arr[i];
    }
    printf("%d", cnt);

    return 0;
}