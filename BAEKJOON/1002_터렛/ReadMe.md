

# Q 1002 (터렛)

<img src="https://img.shields.io/badge/Level-Silver 5-lightgrey"> <img src="https://img.shields.io/badge/Memory-1128%20KB-blue"> <img src="https://img.shields.io/badge/Time-0%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-485%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 이 문제에서는 루트와 제곱근을 사용하기 때문에 **math.h** 헤더에 내장되어있는 sqrt, pow 함수를 사용한다.
>
> - 두 좌표(x1, y1), (x2, y2) 와 거리(r1, r2) 를 원으로 생각한다. 그렇다면 류재명이 있는 경우는 두 원의 교점이라고 생각할 수 있다.
>
> - 위의 개념으로 총 다섯 가지의 경우로 나눌 수 있다.
>
>   ![](https://t1.daumcdn.net/cfile/blog/175C060D4A0D5F00B2)
>
> 
>
> - 이 경우를 식으로 표현해 보면 다음과 같다. (d : 두 원의 중심 좌표 사이의 거리 : r2 - r1)
>
>   1. 교점이 한 개일 경우 : **외접(r1 + r2 = d)** 혹은 **내접(r2 - r1 = d)** 일 경우
>
>   2. 교점이 두 개일 경우 : **r1 + r2 > d** 이고 **r2 - r1 < d** 인 경우
>
>   3. 교점이 무한대일 경우 : **x1 = x2** 이고 **y1 = y2** 이고 **r1 = r2** 인 경우
>
>   4. 교점이 없을 경우 : 한 원이 다른 원보다 작을 경우, 두 원이 외부에 떨어져 있을 경우(이 경우는 마지막에 else로 처리한다.)
>
>      총 <u>네 가지의 경우</u>로 나눠지는 것을 알 수 있다.
>
> 
>
> - 이를 코드로 바꿔 보면 다음과 같다.
>
>   ```c
>   dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));	//(x1, y1)과 (x2, y2)의 거리
>   sub = r1 > r2 ? r1 - r2 : r2 - r1;	// 두 반지름의 차
>   
>   if (dis == 0 && r1 == r2) flag = -1;	//교점이 무한대일 경우
>   else if (r1 + r2 > dis && sub < dis) flag = 2;	//교점이 두 개일 경우
>   else if (r1 + r2 == dis || sub == dis) flag = 1;	//교점이 한 개일 경우
>   else flag = 0;	//개수가 없을 경우
>   ```
>
> 
