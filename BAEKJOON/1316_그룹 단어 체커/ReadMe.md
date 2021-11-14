# Q 1316 (그룹 단어 체커)

<img src="https://img.shields.io/badge/Level-Silver 5-lightgrey"> <img src="https://img.shields.io/badge/Memory-1112%20KB-blue"> <img src="https://img.shields.io/badge/Time-0%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-373%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 단어를 하나 입력받은 뒤 문자의 맨 앞부터 시작으로 다음에 오는 문자들 중 같은 문자가 있는지 확인한다.
> - 만약에 처음 확인하려는 문자와 다른 문자가 나왔을 경우 **그 다음 인덱스부터 끝까지 다시 확인하면서 처음 확인하려고 했던 문자가 뒤에 나오는지 확인**한다. 만약 나온다면 flag값을 하나씩 더해준다. 이 작업을 단어 전체에 반복한다.
> - 만약 flag의 최종 값이 0이라면 그룹 단어이므로 개수를 하나 더한다.

