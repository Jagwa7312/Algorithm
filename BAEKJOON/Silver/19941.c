#include <stdio.h>
#include <string.h>

int main() {
    int n, k;
    char str[30000];

    scanf("%d %d\n%s", &n, &k, str);

    int cnt = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'P') {
            for (int j = i - k; j <= i + k; j++) {
                if (str[j] == 'H') {
                    cnt++;
                    str[j] = '0';
                    break;
                }
            }
        }
    }
    printf("%d", cnt);

    return 0;
}