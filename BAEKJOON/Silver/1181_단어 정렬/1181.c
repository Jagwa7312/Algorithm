#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	int len;
	char str[50];
}string;

int Compare(string *p, string *q);
int main()
{
	int n;
	string *p;

	scanf("%d", &n);
	p = (string *)malloc(n * sizeof(string));
	for (int i = 0; i < n; i++)
	{
		scanf("%s", p[i].str);
		p[i].len = strlen(p[i].str);
		for (int j = 0; j < i; j++)
			if (strcmp(p[i].str, p[j].str) == 0)
			{
				i--;
				n--;
				break;
			}
	}
	qsort(p, n, sizeof(string), Compare);
	for (int i = 0; i < n; i++)
		printf("%s\n", p[i].str);
	free(p);

	return 0;
}
int Compare(string *p, string *q)
{
	if (p->len > q->len) return 1;
	else if (p->len < q->len) return -1;
	else
	{
		if (strcmp(p->str, q->str) > 0) return 1;
		else return 0;
	}
	return 0;
}