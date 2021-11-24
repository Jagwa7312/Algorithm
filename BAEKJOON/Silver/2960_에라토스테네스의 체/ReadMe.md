# [Q 2960 (에라토스테네스의 체)](https://www.acmicpc.net/problem/2960)

<img src="https://img.shields.io/badge/Level-Silver 4-lightgrey"> <img src="https://img.shields.io/badge/Memory-1112%20KB-blue"> <img src="https://img.shields.io/badge/Time-0%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-336%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 문제에 주어진 알고리즘은 다음과 같다.
>
>   1. 2부터 N까지 모든 정수를 적는다.
>   2. 아직 지우지 않은 수 중 가장 작은 수를 찾는다. 이것을 P라고 하고, 이 수는 소수이다.
>   3. P를 지우고, 아직 지우지 않은 P의 배수를 크기 순서대로 지운다.
>   4. 아직 모든 수를 지우지 않았다면, 다시 2번 단계로 간다.
>
> - 일반적인 에라토스테네스의 체 알고리즘에서 중간 과정을 조금 바꾸면 된다.
>
>   ```c
>   for (int i = 2; i <= n; i++)
>   	for (int j = i; j <= n; j += i)
>   	{
>   		if (num[j] == 0) continue;	//이미 지워진 수는 건너뛰기
>   		num[j] = 0;
>   		cnt++;	//지워진 수 카운팅
>   		if (cnt == k)	//입력 값과 지워진 수가 같으면 종료
>   		{
>   			printf("%d\n", j);
>   			return 0;
>   		}
>   	}
>   ```
>
> - 수를 지우는 과정에서 지울 때 마다 카운팅을 하여 처음 입력받았던 k값과 같아진다면 해당 수를 출력하고 종료한다.
