#include <stdio.h>
#define MAX 100001

int number[MAX];
void SieveOfEratos();
int main()
{
	SieveOfEratos();

	return 0;
}
void SieveOfEratos()
{	//�迭�� ���� �ֱ�
	for (int i = 2; i <= MAX; i++)
		number[i] = i;
	for (int i = 2; i <= MAX; i++)
	{
		if (number[i] == 0) continue;	//�̹� �Ҽ��̸� �Ѿ
		for (int j = i + i; j <= MAX; j += i)	//�ش� ������ ��� ���� ����
			number[j] = 0;
	}
	//�迭�� ����� �� �� �Ҽ��� ���
	for (int i = 2; i <= MAX; i++)
		if (number[i] != 0) printf("%d ", number[i]);
}