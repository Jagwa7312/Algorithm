#include <stdio.h>
#include <stdlib.h>

int compare(int *p, int *q);
int main() {
    int n;
    int arr[100] = { 0 };

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), compare);

    int sum = arr[0], point = 0;
    for (int i = 1; i < n; i++) {
        point += sum * arr[i];
        sum += arr[i];
    }
    printf("%d", point);

    return 0;
}
int compare(int *p, int *q) {
    if (*p > *q) return 1;
    else if (*p < *q) return -1;
    else return 0;
}