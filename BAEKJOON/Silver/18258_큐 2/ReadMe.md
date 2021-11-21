# [Q 18258 (큐 2)](https://www.acmicpc.net/problem/18258)

<img src="https://img.shields.io/badge/Level-Silver 4-lightgrey"> <img src="https://img.shields.io/badge/Memory-8928%20KB-blue"> <img src="https://img.shields.io/badge/Time-536%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-955%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 이 문제에서는 **N이 (1 ≤ N ≤ 2,000,000)** 이므로 유사한 문제인 [10845번](https://www.acmicpc.net/problem/10845)처럼 인덱스 번호만 더하면 시간 초과가 난다. 따라서 <u>front와 rear을 이용하여 큐를 구현</u>하였다.
> - first를 0, rear을 -1로 초기화해준다. 수를 push할 때 마다 rear의 크기를 1씩 늘려간다. 따라서 <u>큐의 처음을 나타내는 front에서 마지막을 나타내는 rear을 뺀 뒤 1을 더해주면 큐의 길이</u>가 된다.
> - 위에서 설명한 방법으로(큐의 길이 = front + rear + 1) 나머지 명령들을 구현해준다.

