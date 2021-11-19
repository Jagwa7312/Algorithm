# [Q 2303 (숫자 게임)](https://www.acmicpc.net/problem/2303)

<img src="https://img.shields.io/badge/Level-Silver 5-lightgrey"> <img src="https://img.shields.io/badge/Memory-1116%20KB-blue"> <img src="https://img.shields.io/badge/Time-0%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-681%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 2중 배열 선언으로 N(2 ≤ N ≤ 1000) 명의 5장의 카드를 입력받을 수 있다.
>
> - N 명의 카드 5장을 입력받으면서 각각의 카드들의 합들 중 <u>일의 자리가 가장 큰 수를 찾아 새로운 배열에 저장한다.</u>
>
> - N 명의 일의자리 최솟값이 저장되어 있는 배열에서 가장 큰 값을 찾는다. 그 후 배열을 **뒤에서부터 탐색**한다.
>
>   가장 큰 값과 같은 값이 나왔을 경우 출력하고 반복문을 탈출한다.
>
> - 배열을 뒤에서부터 읽는 이유는 <u>이긴 사람이 두 명 이상일 경우 번호가 가장 큰 사람의 번호를 출력</u>해야 하므로 뒤에서부터 탐색한다.
