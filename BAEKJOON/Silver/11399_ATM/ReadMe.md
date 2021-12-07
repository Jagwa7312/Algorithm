# [Q 11399 (ATM)](https://www.acmicpc.net/problem/11399)

<img src="https://img.shields.io/badge/Level-Silver 3-lightgrey"> <img src="https://img.shields.io/badge/Memory-1112%20KB-blue"> <img src="https://img.shields.io/badge/Time-0%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-461%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - N 명의 사람이 줄을 섰을 때, 인출하는 시간이 가장 짧은 순서대로 줄을 섰을 때 시간의 합이 최소가 된다.
>
> - 따라서 시간 순서대로 오름차순으로 정렬시켜준 뒤 시간의 합을 구하면 된다. 주의할 점은, 합을 더할 때
>
>   **이전 사람들의 모든 시간의 합 + 현재 사람의 시간**을 계산해야 한다.*(예시로 3번째 사람의 경우 P1 + P2 + P3이다.)*
