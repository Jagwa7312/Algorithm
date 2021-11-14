#include <stdio.h>
#define number 8

int sorted[8];	//���� �迭�� �ݵ�� ���� ������ ����
void merge(int a[], int m, int middle, int n)
{
	int i = m;
	int j = middle + 1;
	int k = m;
	// ���� ������� �迭�� ����
	while (i <= middle && j <= n)
	{
		if (a[i] <= a[j]) sorted[k++] = a[i++];
		else sorted[k++] = a[j++];
	}
	// ���� �����͵� ����
	if (i > middle)	//i�� ���� ����Ǿ��� ��
		for (int t = j; t <= n; t++)
			sorted[k++] = a[t];
	else	//j�� ���� ����Ǿ��� �� 
		for (int t = i; t <= middle; t++)
			sorted[k++] = a[t];
	// ���ĵ� �迭�� ����
	for (int t = m; t <= n; t++)
		a[t] = sorted[t];
}
void mergeSort(int a[], int m, int n)
{	
	int middle = (m + n) / 2;
	//�迭�� ũ�Ⱑ 1���� ū ���
	if (m < n)
	{
		mergeSort(a, m, middle);
		mergeSort(a, middle + 1, n);
		merge(a, m, middle, n);
	}
}
int main()
{
	int array[number] = { 7, 6, 5, 8, 3, 5, 9, 1 };

	mergeSort(array, 0, number - 1);
	for (int i = 0; i < number; i++)
		printf("%d ", array[i]);

	return 0;
}