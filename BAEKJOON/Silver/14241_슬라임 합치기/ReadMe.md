# [Q 14241 (슬라임 합치기)](https://www.acmicpc.net/problem/14241)

<img src="https://img.shields.io/badge/Level-Silver 2-lightgrey"> <img src="https://img.shields.io/badge/Memory-1112%20KB-blue"> <img src="https://img.shields.io/badge/Time-0%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-532%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - n개의 슬라임을 오름차순으로 정렬한다.
>
>   ```c
>   int sum = arr[0], point = 0;	//sum:슬라임의 크기, pointn:점수
>   for (int i = 1; i < n; i++) {
>   	point += sum * arr[i];	//점수 계산
>       sum += arr[i];	//슬라임 합치기
>   }
>   ```
>
>   sum의 초기값을 가장 작은 크기의 슬라임의 크기로 초기화한다. 그후 현재 슬라임의 크기 x 다음 슬라임의 크기로 점수를 구한 뒤 슬라임을 합친다.
