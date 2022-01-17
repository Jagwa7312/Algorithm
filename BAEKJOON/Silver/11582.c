#include <stdio.h>
#define MAX 1048577

int N, K, cnt = 0;
int arr[MAX], sorted[MAX];

void merge(int m, int middle, int n) {
    if ((n - m) > N / K) {
        return;
    }

	int i = m, j = middle + 1, k = m;

	while (i <= middle && j <= n) {
		if (arr[i] <= arr[j]) {
			sorted[k++] = arr[i++];
		}

		else {
			sorted[k++] = arr[j++];
		}
	}

	if (i > middle) {
		for (int t = j; t <= n; t++) {
			sorted[k++] = arr[t];
		}
	}

	else {
		for (int t = i; t <= middle; t++) {
			sorted[k++] = arr[t];
		}
	}

	for (int t = m; t <= n; t++) {
		arr[t] = sorted[t];
	}
    cnt++;
}

void mergeSort(int m, int n) {	
	int middle = (m + n) / 2;

	if (m < n) {
		mergeSort(m, middle);
		mergeSort(middle + 1, n);
		merge(m, middle, n);
	}
}

int main() {
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &K);

    mergeSort(0, N - 1);

    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

	return 0;
}