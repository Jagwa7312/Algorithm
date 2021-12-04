# [Q 1246 (온라인 판매)](https://www.acmicpc.net/problem/1246)

<img src="https://img.shields.io/badge/Level-Silver 5-lightgrey"> <img src="https://img.shields.io/badge/Memory-1112%20KB-blue"> <img src="https://img.shields.io/badge/Time-0%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-535%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 가격을 배열에 입력받은 후 **퀵 정렬**을 이용하여 내림차순으로 정렬한다.
>
> - 고객 한 명당 달걀을 1개 이하로밖에 구매하지 못한다. 따라서 총 계란 수보다 고객의 수가 더 많을 경우를 대비하여 <u>egg 변수를 통하여 총 구매 가능한 계란의 수를 조정</u>한다.
>
>   ```c
>   egg = (m < n) ? m : n;	//n : 달걀의 개수, m : 고객의 수
>   ```
>
> - 내림차순으로 정렬되어있으므로 반복문을 통하여 가격의 총합을 쉽게 구할 수 있다.
>
>   ```c
>   for (int i = 0; i < egg; i++)
>   	int total = price[i] * (i + 1);	//인덱스는 0부터 시작하므로 +1
>   ```
>
>   **해당 인덱스와 그 인덱스의 값을 곱하면 총 가격의 합**이 된다. 배열이 [10 8 7 2] 순으로 정렬되어있다고 하면, 10원으로 살 수 있는 사람은 1번째 사람이고, 8원으로 살 수 있는 사람은 1, 2번째 사람이다. 마찬가지로 7원으로 살 수 있는 사람은 1, 2, 3번째 사람이다.
>
> - 그 후 최댓값과 비교하여 가장 높은 가격의 인덱스와 총합을 출력한다.
