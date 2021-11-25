#include <stdio.h>
#include <string.h>

int idx = 0;
char stack[101];
void push(char ch) {
	stack[idx++] = ch;
}
void pop() {
	stack[--idx];
}
int empty() {
	return idx == 0;
}
char top() {
	return stack[idx - 1];
}
int main() {
	char str[101];
	while (1) {
		int flag = 1;
		gets(str);
		if (str[0] == '.') break;

		for (int i = 0; i < strlen(str); i++) {
			if (str[i] == '(' || str[i] == '[') push(str[i]);
			else if (str[i] == ')' || str[i] == ']') {
				if (empty()) {
					flag = 0;
					break;
				}
				else {
					if ((str[i] == ')' && top() == '(') || (str[i] == ']' && top() == '[')) pop();
					else {
						flag = 0;
						break;
					}
				}
			}
		}

		if (!empty()) flag = 0;
		while (!empty()) pop();
		if (flag == 1) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}