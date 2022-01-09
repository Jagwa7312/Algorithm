#include <stdio.h>
#include <string.h>

int main() {
	char board[51];
	scanf("%s", board);

	for (int i = 0; i < strlen(board) - 3; i++) {
		if (strlen(board) < 3) break;
		if (board[i] == 'X' && board[i + 1] == 'X' && board[i + 2] == 'X' && board[i + 3] == 'X')
			for (int j = 0; j < 4; j++)
				board[i + j] = 'A';
	}
	for (int i = 0; i < strlen(board) - 1; i++)
		if (board[i] == 'X' && board[i + 1] == 'X')
			for (int j = 0; j < 2; j++)
				board[i + j] = 'B';

	int flag = 1;
	for (int i = 0; i < strlen(board); i++)
		if (board[i] == 'X') flag = 0;
	(flag == 1) ? printf("%s\n", board) : printf("-1\n");

	return 0;
}