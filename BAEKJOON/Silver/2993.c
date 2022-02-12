#include <stdio.h>
#include <string.h>

char str[51], rev[51], max[51];

int main() {
    scanf("%s", str);

    for (int i = 1; i < strlen(str) - 1; i++) {
        for (int j = i + 1; j < strlen(str); j++) {
            reverse(i, j);

            if (i == 1 && j == 2) {
                strcpy(max, rev);
            }
            
            compare();
        }
    }

    printf("%s", max);

    return 0;
}

void reverse(int x, int y) {
    int idx = 0;

    for (int i = x - 1; i >= 0; i--) {
        rev[idx++] = str[i];
    }

    for (int i = y - 1; i >= x; i--) {
        rev[idx++] = str[i];
    }

    for (int i = strlen(str) - 1; i >= y; i--) {
        rev[idx++] = str[i];
    }

    rev[idx] = '\0';
}

void compare() {
    if (strcmp(max, rev) > 0) {
        strcpy(max, rev);
    }
}