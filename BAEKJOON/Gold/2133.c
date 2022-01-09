#include <stdio.h>

int arr[1001] = { 0 };

int dp(int x) {
    if (x == 0) return 1;
    if (x == 1) return 0;
    if (x == 2) return 3;
    if (arr[x] != 0) return arr[x];
    
    int result = 3 * dp(x - 2);

    for (int i = 3; i <= x; i++) {
        if (i % 2 == 0) {
            result += 2 * dp(x - i);
        }
    }
    return arr[x] = result;
}
int main() {
    int n;

    scanf("%d", &n);
    printf("%d", dp(n));

    return 0;
}