#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int len, grow;
}Tree;

int compare(Tree *p, Tree *q);
int main() {
    int n;

    scanf("%d", &n);
    Tree *arr = (Tree *)malloc(n * sizeof(Tree));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i].len);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i].grow);
    }
    qsort(arr, n, sizeof(Tree), compare);

    long long total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i].len;
        for (int j = i + 1; j < n; j++) {
            arr[j].len += arr[j].grow;
        }
    }
    printf("%lld", total);

    free(arr);
    return 0;
}
int compare(Tree *p, Tree *q) {
    if (p->grow > q->grow) return 1;
    else if (p->grow < q->grow) return -1;
    else {
        if (p->len > q->len) return 1;
        else return -1;
    }
    return 0;
}