# [Q 1181 (단어 정렬)](https://www.acmicpc.net/problem/1181)

<img src="https://img.shields.io/badge/Level-Silver 5-lightgrey"> <img src="https://img.shields.io/badge/Memory-2528%20KB-blue"> <img src="https://img.shields.io/badge/Time-728%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-753%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 각각의 입력된 문자열과 문자열의 길이를 저장하는 구조체를 선언하고 자료형은 **string**으로 정의한다.
>
>   정수 N이 (1 ≤ N ≤ 20,000) 사이의 범위이므로 메모리 낭비 방지를 위해 동적 할당을 통해 입력받은 N만큼 메모리를 할당한다.
>
> - 문자열들을 입력받는 동시에 구조체 배열 안에 이전에 나왔던 문자열이 있을 경우 **N을 하나 빼준 뒤**
>
>   **인덱스를 이전으로 되돌린다.**
>
> - 이 문제에서는 (1 ≤ N ≤ 20,000) 이므로 N이 기하급수적으로 크다고 생각하지 않아서 **퀵 정렬**을 사용하였다.

