# [Q 1417 (국회의원 선거)](https://www.acmicpc.net/problem/1417)

<img src="https://img.shields.io/badge/Level-Silver 5-lightgrey"> <img src="https://img.shields.io/badge/Memory-1112%20KB-blue"> <img src="https://img.shields.io/badge/Time-0%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-496%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 입력을 받을 때, 다솜이가 기호 1번이라고 하였으므로 기호 2번부터 배열에 저장한다.
> - 무한루프문에서 다솜이의 표보다 많은지 체크하는 변수 flag를 1로 초기화한다. 만약 배열 안에서 다솜이의 표 보다 많은 후보가 있을 경우 flag를 0으로 바꾼다. 만약 다솜이의 표가 가장 많을 경우 flag는 1로 루프를 탈출한다.
> - 후보들의 득표수를 내림차순으로 정렬시킨 뒤 가장 앞에 있는 후보의 표를 1 빼고 다솜이의 표에 1 더한다. 그리고 카운트를 1 늘린다. 이 과정을 반복한다.

