# [Q 1120 (문자열)](https://www.acmicpc.net/problem/1120)

<img src="https://img.shields.io/badge/Level-Silver 4-lightgrey"> <img src="https://img.shields.io/badge/Memory-1116%20KB-blue"> <img src="https://img.shields.io/badge/Time-0%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-607%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 문자열 A에 단어를 추가하는 방법은 두 가지밖에 존재하지 않는다.
>   1. **A의 앞**에 아무 알파벳이나 추가한다.
>   2. **A의 뒤**에 아무 알파벳이나 추가한다.
> - 두 문자열을 입력받은 뒤 두 문자열의 길이 차를 변수 len에 대입한다.
> - 문자열 A의 길이가 B보다 항상 작거나 같으므로 <u>문자열 A를 한 칸씩 뒤로 미루면서 B와 비교</u>한다. 비교할 때  같은 문자가 나왔을 경우 cnt를 하나씩 더한다. 만약에 현재 max값*(cnt가 가장 큰 값을 넣는 변수)*보다 cnt값이 더 클 경우 현재의 인덱스를 저장한다.
> - 모든 반복이 종료되었을 때의 <u>인덱스값 만큼 문자열 A를 뒤로 미뤄준다.</u> 그리고 A의 앞과 뒤에 알파벳을 추가한다.
> - 두 문자열의 길이가 같아졌을 때를 비교하여 바꿔야 하는 알파벳의 개수를 출력한다.*(최솟값은 위에서 cnt 값을 통하여 찾았으므로 별 다른 시행을 할 필요는 없다.)*
