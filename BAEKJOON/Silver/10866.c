#include <stdio.h>
#include <string.h>

int idx = 0;
int deque[10001];
void push_front(int a) {
	deque[0] = a;
	idx++;
}
void push_back(int a) {
	deque[idx++] = a;
}
void pop_front() {
	if (idx != 0) {
		printf("%d\n", deque[0]);
		idx--;
	}
	else printf("-1\n");
}
void pop_back() {
	if (idx != 0) printf("%d\n", deque[--idx]);
	else printf("-1\n");
}
void size() {
	printf("%d\n", idx);
}
void empty() {
	if (idx == 0) printf("1\n");
	else printf("0\n");
}
void front() {
	if (idx != 0) printf("%d\n", deque[0]);
	else printf("-1\n");
}
void back() {
	if (idx != 0) printf("%d\n", deque[idx - 1]);
	else printf("-1\n");
}
int main() {
	int t;
	scanf("%d", &t);

	while (t--) {
		char com[20];
		scanf("%s", com);

		if (strcmp(com, "push_front") == 0) {
			int n;
			scanf("%d", &n);
			for (int i = idx - 1; i >= 0; i--)
				deque[i + 1] = deque[i];
			push_front(n);
		}
		else if (strcmp(com, "push_back") == 0) {
			int n;
			scanf("%d", &n);
			push_back(n);
		}
		else if (strcmp(com, "pop_front") == 0) {
			pop_front();
			for (int i = 0; i < idx; i++)
				deque[i] = deque[i + 1];
		}
		else if (strcmp(com, "pop_back") == 0) pop_back();
		else if (strcmp(com, "size") == 0) size();
		else if (strcmp(com, "empty") == 0) empty();
		else if (strcmp(com, "front") == 0) front();
		else if (strcmp(com, "back") == 0) back();
	}
	return 0;
}