# [Q 10814 (나이순 정렬)](https://www.acmicpc.net/problem/10814)

<img src="https://img.shields.io/badge/Level-Silver 5-lightgrey"> <img src="https://img.shields.io/badge/Memory-13616%20KB-blue"> <img src="https://img.shields.io/badge/Time-64%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-630%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 구조체로 사람의 나이, 이름, 몇 번째 입력인지 나타내는 인덱스를 선언 후 자료형은 **person**으로 정의한다.
>
> - **1 ≤ N ≤ 100,000** 이므로 구조체 배열로 선언하면 메모리 낭비의 문제가 있기 때문에 동적 할당을 통하여 배열을 만든다.
>
> - 각 사람의 정보를 입력한 뒤 **퀵 정렬[O(NlogN)]**을 통하여 오름차순으로 정렬한다.
>
>   이 때, 같은 나이일 경우 먼저 입력받은 순서로 정렬하라고 하였기에, 각각의 정보를 입력받을 시 대입해 주었던 **인덱스 번호**를 통하여 순번을 결정한다.
