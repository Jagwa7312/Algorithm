# [Q 1188 (음식 평론가)](https://www.acmicpc.net/problem/1188)

<img src="https://img.shields.io/badge/Level-Gold 5-yellow"> <img src="https://img.shields.io/badge/Memory-1112%20KB-blue"> <img src="https://img.shields.io/badge/Time-0%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-211%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 모든 소시지를 일렬로 놓은 후 **n을 1로 가정**한다면, 소시지는 사람이 m 명일 경우 **m - 1(n)**만큼 잘라지게 된다.
>- 또한 갯수와 관계 없이 평론가들은 소시지를 **n / m** 만큼 가져가게 된다.
> - 따라서 최소한 **m - GCD(n, m)** 번의 칼질을 하면 된다.
