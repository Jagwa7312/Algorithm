# Q 1065 (한수)

<img src="https://img.shields.io/badge/Level-Silver 4-lightgrey"> <img src="https://img.shields.io/badge/Memory-1112%20KB-blue"> <img src="https://img.shields.io/badge/Time-0%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-555%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 반복문을 통하여 1 ~ N(1 ≤ N ≤ 1000) 까지 탐색한다. 탐색할 때는 해당 숫자를 문자열에 저장 후 한수인지 판별해주는 CheckNum 함수를 호출한다.
>
> - CheckNum 함수에서는 숫자의 자릿수들이 저장되어있는 **문자열**과 해당 숫자의 **자릿수**를 인자로 받는다.
>
>   만약 한수임이 확인될 경우 1을, 아닐 경우 0을 반환한다.
>
> - 함수 안에서는 switch문을 통하여 자릿수에 대한 case를 다음과 같이 나누어 준다.
>
>   1. 자릿수가 1 혹은 2 일 경우 : 무조건 한수에 해당되므로 1을 반환한다.
>   2. 자릿수가 3일 경우 : 각 자릿수의 차를 비교하여 같으면 1을 반환한다.
>   3. 한수가 아닐 경우 0을 반환한다.
>
> - 만약 CheckNum 함수가 1을 반환했을 경우 한수이므로 개수를 1 더한다.

