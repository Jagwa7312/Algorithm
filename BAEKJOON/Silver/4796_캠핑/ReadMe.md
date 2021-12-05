# [Q 4796 (캠핑)](https://www.acmicpc.net/problem/4796)

<img src="https://img.shields.io/badge/Level-Silver 5-lightgrey"> <img src="https://img.shields.io/badge/Memory-1112%20KB-blue"> <img src="https://img.shields.io/badge/Time-0%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-279%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 이 코드에서 가장 핵심이 되는 부분이다.
>
>   ```c
>   total += l * (v / p);	//캠핑장 이용 일수 계산
>   v %= p;	//남은 휴가 일수 계산
>   total += (v < l) ? v : l;
>   ```
>
>   가장 먼저 휴가 일수를 연속하는 P일로 나누어 준다. 그리고 휴가 일수에서 빼준다. 만약 남은 휴가 일수보다  캠핑장 이용 일수가 더 클 경우 남은 휴가 일수를 마지막으로 더하고 아닐 경우 캠핑장 이용 일수를 더한다.
