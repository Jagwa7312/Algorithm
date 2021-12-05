# [Q 1343 (폴리오미노)](https://www.acmicpc.net/problem/1343)

<img src="https://img.shields.io/badge/Level-Silver 5-lightgrey"> <img src="https://img.shields.io/badge/Memory-1116%20KB-blue"> <img src="https://img.shields.io/badge/Time-0%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-625%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 보드판 문자열의 맨 앞부터 인덱스를 하나하나 늘려가며 탐색하면 된다.
> - <u>길이가 긴 AAAA 먼저 탐색</u>한다. 문자열에서 대입 가능한 모든 부분에 AAAA를 대입한다. 그 후 남은 부분들에서 다시 BB를 대입한다.
> - 만약 모든 반복이 종료된 후 문자열에 X가 남아있다면 덮을 수 없는 문자열이므로 -1을 출력하고 아니라면 바꾼 문자열을 출력한다.
