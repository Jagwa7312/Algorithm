# Q 9012 (괄호)

<img src="https://img.shields.io/badge/Level-Silver 4-lightgrey"> <img src="https://img.shields.io/badge/Memory-1116%20KB-blue"> <img src="https://img.shields.io/badge/Time-28%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-581%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - <u>스택을 활용하여 괄호의 짝을 맞춘다.</u> 문자열이 VPS인지 확인할 flag 변수를 선언한다. flag는 선언 시 1로 초기화한다.(flag = 0 → VPS가 아니다. flag = 1 → VPS이다.)
> - 입력받은 문자열에서 ( 가 나왔을 경우 스택에 **push** 한다. 반대로 ) 가 나왔을 경우에는 먼저 스택이 비어 있는지 확인한다. <u>스택이 비어있을 경우 VPS가 아니므로 flag를 0으로 변경 후 반복문을 탈출</u>한다. 스택이 비어있지 않은 경우는 **pop** 해준다. 만약 <u>반복문이 종료되었을 때 스택이 비어있지 않다면 VPS가 아니므로 flag를 0으로 변경</u>한다.
> - 다음 문자열이 입력되야 하므로 스택을 비워준다.
