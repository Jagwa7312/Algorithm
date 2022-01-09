#include <stdio.h>
#include <string.h>

int main() {
    int cnt0 = 0, cnt1 = 0;
    char str1[501], str2[501];

    scanf("%s", str1);

    for (int i = 0; i < strlen(str1); i++) {
        if (str1[i] == '0') cnt0++;
        else cnt1++;
    }
    cnt0 /= 2;
    cnt1 /= 2;

    for (int i = 0; i < strlen(str1) && cnt1 != 0; i++) {
        if (str1[i] == '1') {
            str1[i] = 2;
            cnt1--;
        }
    }
    for (int i = strlen(str1) - 1; i >= 0 && cnt0 != 0; i--) {
        if (str1[i] == '0') {
            str1[i] = 2;
            cnt0--;
        }
    }

    int idx = 0;
    for (int i = 0; i < strlen(str1); i++) {
        if (str1[i] == '1' || str1[i] == '0') {
            str2[idx++] = str1[i];
        }
    }
    str2[idx] = '\0';
    printf("%s", str2);

    return 0;
}