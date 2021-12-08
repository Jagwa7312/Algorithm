# [Q 2872 (우리집엔 도서관이 있어)](https://www.acmicpc.net/problem/2872)

<img src="https://img.shields.io/badge/Level-Silver 3-lightgrey"> <img src="https://img.shields.io/badge/Memory-2164%20KB-blue"> <img src="https://img.shields.io/badge/Time-48%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-253%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - n이 5일 때,  3 1 4 2 5 순서로 책이 놓여 있다고 가정해보자. 이 때의 정렬하는 횟수는 2회가 될 것이다. 이유는 다음과 같다.
>
> - **3** 1 **4** 2 **5** 이 책들에서 3 4 5는 이미 정렬이 되어 있다. 따라서 정렬할 책은 1, 2 두 권밖에 남지 않는다.
>
> - 결과는 전체 책 수에서 이미 정렬되어 있는 책의 수를 빼면 된다.
>
>   ```c
>   int cnt = n;
>   for (int i = n - 1; i >= 0; i--)
>   	if (book[i] == cnt) cnt--;
>   ```
>
>    다음과 같이 배열의 맨 뒤부터 탐색하면 된다.
