#include <stdio.h>

int wood[5];

int main() {
    for (int i = 0; i < 5; i++) {
        scanf("%d", &wood[i]);
    }

    while(1) {
        int tmp, flag = 0;

        if (wood[0] == 1 && wood[1] == 2 && wood[2] == 3 && wood[3] == 4 && wood[4] == 5) {
            break;
        }

        for (int i = 0; i < 4; i++) {
            if (wood[i] > wood[i + 1]) {
                tmp = wood[i];
                wood[i] = wood[i + 1];
                wood[i + 1] = tmp;

                flag = 1;
            }

            if (flag == 1) {
                for (int j = 0; j < 5; j++) {
                    printf("%d ", wood[j]);
                }
                printf("\n");
                flag = 0;
            }
        }
    }

    return 0;
}