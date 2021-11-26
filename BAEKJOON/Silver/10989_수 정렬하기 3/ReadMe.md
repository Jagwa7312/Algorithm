# [Q 10989 (수 정렬하기 3)](https://www.acmicpc.net/problem/10989)

<img src="https://img.shields.io/badge/Level-Silver 5-lightgrey"> <img src="https://img.shields.io/badge/Memory-1152%20KB-blue"> <img src="https://img.shields.io/badge/Time-2596%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-309%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 최대 정수의 크기가 10000 까지이므로 **카운팅 배열**을 이용한다.
> - 정렬할 수를 입력받은 후 <u>해당 수를 인덱스로 갖는 배열의 값을 하나 늘린다.</u> 즉, 입력받은 수가 몇 번 나왔는지 센다.
> - 만약에 한 번도 나오지 않았다면 continue, 아니라면 나온 횟수만큼 출력한다.
