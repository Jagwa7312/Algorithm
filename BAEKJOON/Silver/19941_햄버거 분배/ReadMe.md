# [Q 19941 (햄버거 분배)](https://www.acmicpc.net/problem/19941)

<img src="https://img.shields.io/badge/Level-Silver 3-lightgrey"> <img src="https://img.shields.io/badge/Memory-1112%20KB-blue"> <img src="https://img.shields.io/badge/Time-8%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-480%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 문자열을 처음 인덱스부터 체크한다. P가 나왔을 경우, 해당 인덱스를 기준으로 **앞 뒤 k만큼의 범위에서 H가 있는지 체크**한 뒤 가장 먼저 나오는 H를 0으로 변경 후 카운트를 하나 늘린다. 그리고 반복문을 탈출한다.
