#include <stdio.h>
#include <string.h>

int main()
{
	int i, j;
	char temp;
	char n[10];

	scanf("%s", n);
	for (i = 0; i < strlen(n) - 1; i++)
		for (j = i; j < strlen(n); j++)
			if (n[i] < n[j])
			{
				temp = n[i];
				n[i] = n[j];
				n[j] = temp;
			}
	printf("%s", n);

	return 0;
}