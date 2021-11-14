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
{	//배열에 숫자 넣기
	for (int i = 2; i <= MAX; i++)
		number[i] = i;
	for (int i = 2; i <= MAX; i++)
	{
		if (number[i] == 0) continue;	//이미 소수이면 넘어감
		for (int j = i + i; j <= MAX; j += i)	//해당 숫자의 배수 전부 제거
			number[j] = 0;
	}
	//배열에 저장된 수 중 소수만 출력
	for (int i = 2; i <= MAX; i++)
		if (number[i] != 0) printf("%d ", number[i]);
}