#include <stdio.h>
#include <stdlib.h>

int compare(int *p, int *q);
int main() {
    int n, k, a, b;

    scanf("%d %d %d %d", &n, &k, &a, &b);

    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        arr[i] = k;
    }

    int day = 1;
    while(1) {
        int flag = 0;

        qsort(arr, n, sizeof(int), compare);
        for (int i = 0; i < a; i++) {
            arr[i] += b;
        }

        for (int i = 0; i < n; i++) {
            arr[i]--;
            if (arr[i] == 0) {
                flag = 1;
            }
        }
        
        if (flag == 1) {
            break;
        }
        day++;
    }
    printf("%d", day);

    free(arr);
    return 0;
}
int compare(int *p, int *q) {
    if (*p > *q) return 1;
    else if (*p < *q) return -1;
    else return 0;
}