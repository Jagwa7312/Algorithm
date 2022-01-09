#include <stdio.h>
#include <string.h>

int main() {
	char a[51], b[51];
	scanf("%s %s", a, b);
	int len = strlen(b) - strlen(a);

	int idx = 0, max = 0;
	for (int i = 0; i <= len; i++) {
		int cnt = 0;
		for (int j = 0; j < strlen(a); j++)
			if (a[j] == b[j + i]) cnt++;

		if (max < cnt) {
			max = cnt;
			idx = i;
		}
	}

	for (int i = strlen(a); i >= 0; i--)
		a[i + idx] = a[i];
	for (int i = 0; i < idx; i++)
		a[i] = b[i];
	for (int i = strlen(a); i <= strlen(b); i++)
		a[i] = b[i];

	int cnt = 0;
	for (int i = 0; i < strlen(a); i++)
		if (a[i] != b[i]) cnt++;
	printf("%d\n", cnt);

	return 0;
}