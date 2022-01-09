#include <stdio.h>
#include <string.h>

int idx = 0;
char stack[51];
void push(char ch) {
	stack[idx++] = ch;
}
void pop() {
	stack[--idx];
}
int empty() {
	return idx == 0;
}
int main() {
	int cnt = 0;
	char str[51];
	scanf("%s", str);
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == '(') push(str[i]);
		else {
			if (empty()) cnt++;
			else pop();
		}
	}
	while (!empty()) {
		pop();
		cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}