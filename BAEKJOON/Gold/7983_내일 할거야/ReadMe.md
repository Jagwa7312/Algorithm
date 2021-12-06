# [Q 7983 (내일 할거야)](https://www.acmicpc.net/problem/7983)

<img src="https://img.shields.io/badge/Level-Gold 5-yellow"> <img src="https://img.shields.io/badge/Memory-16744%20KB-blue"> <img src="https://img.shields.io/badge/Time-476%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-582%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - n 개의 과제를 t에 대하여 내림차순으로 정렬한다. 그 후 현재 일 수를 과제의 시작 일 수로 초기화해주기 위해 끝내야 하는 일 수에서 과제를 하는 데 걸리는 시간을 빼 준다.
>
>   ```c
>   int days = arr[0].t - arr[0].d;	//days : 현재 일수
>   ```
>
> - 현재 일 수가 과제를 끝내야 하는 일 수보다 더 크다면 다음 과제는 현재의 일 수에 영향을 받지 않는다. 따라서 현재 일수를 다음 과제의 시작일로 다시 변경시켜준다.
>
> - 만약 더 작다면 현재 일 수에서 다음 과제를 하는 데 걸리는 일 수 만큼 빼 주면 된다.
>
>   ```c
>   for (int i = 0; i < n; i++) {
>   	if (days >= arr[i].t) days = arr[i].t - arr[i].d;
>   	else days -= arr[i].d;
>   }
>   ```

