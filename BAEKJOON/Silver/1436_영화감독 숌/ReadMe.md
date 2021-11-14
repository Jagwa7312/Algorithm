# Q 1436 (영화감독 숌)

<img src="https://img.shields.io/badge/Level-Silver 5-lightgrey"> <img src="https://img.shields.io/badge/Memory-1112%20KB-blue"> <img src="https://img.shields.io/badge/Time-28%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-265%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 변수 n, 몇 번째 종말의 숫자일지 세는 변수 cnt를 통해 cnt가 n과 같아질 때 까지 반복문을 시행한다.
>
>   **i = 665**를 시작으로 숫자를 하나씩 늘려가며 666이 포함된 숫자를 찾는다.
>
> - temp 변수에 현재 숫자를 저장해준 뒤 다시 반복문을 시행한다. 시행 내용은 **자릿수를 맨 뒤에서부터 하나씩 없애가면서 1000으로 나누어 666이 되는지 체크**한다.
>
> - 만약 666이 포함되어 있다면 cnt를 하나 더하고 반복문을 탈출하고, 없다면 맨 뒤 자리수부터 하나씩 없앤다.
>
>   끝까지 666이 포함되어 있지 않다면 그대로 반복문을 종료하고 다음 숫자로 넘어간다.

