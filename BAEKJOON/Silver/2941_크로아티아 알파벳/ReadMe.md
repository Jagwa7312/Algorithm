# [Q 2941 (크로아티아 알파벳)](https://www.acmicpc.net/problem/2941)

<img src="https://img.shields.io/badge/Level-Silver 5-lightgrey"> <img src="https://img.shields.io/badge/Memory-1112%20KB-blue"> <img src="https://img.shields.io/badge/Time-0%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-664%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 최대 길이 100의 문자열을 입력받은 뒤 맨 앞 인덱스부터 탐색한다. 탐색할 때는 세 가지 경우로 나눈다.
>   1. **c, s, z** 으로 시작하는 경우 다음 문자열이 **=** 이나 **-** 이면 알파벳의 개수를 하나 더한다.
>   2. **l, n** 으로 시작하는 경우 다음 문자열이 **j** 이면 알파벳의 개수를 하나 더한다.
>   3. **d** 로 시작하는 경우 **-** 가 왔을 경우와 **z** 와 이어서 **=** 이 왔을 경우로 나누어 각 경우에 해당할 경우 알파벳 개수를 하나 더한다.
> - 탐색을 끝낸 후 나온 **cnt 변수**는 현재 문자열에 존재하는 **크로아티아 알파벳의 개수**이므로 전체 문자열의 개수에서 차감해준다.

