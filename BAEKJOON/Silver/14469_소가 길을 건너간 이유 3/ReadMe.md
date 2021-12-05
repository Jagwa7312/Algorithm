# [Q 14469 (소가 길을 건너간 이유 3)](https://www.acmicpc.net/problem/14469)

<img src="https://img.shields.io/badge/Level-Silver 5-lightgrey"> <img src="https://img.shields.io/badge/Memory-1112%20KB-blue"> <img src="https://img.shields.io/badge/Time-0%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-620%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 소 한 마리의 도착한 시간과 검문받는 시간을 구조체로 저장한다.
> - 입력받은 값들을 도착한 시간을 기준으로 오름차순으로 정렬하고 같은 값이 있을 경우 검문받는 시간을 기준으로 정렬한다.
> - **만약에 도착한 시간 + 검문받는 시간의 합이 다음 소가 도착했을 때의 도착한 시간보다 작을 경우 값을 바꾼다.** 그 뒤 검문받는 시간을 더한다.
