# [Q 11899 (괄호 끼워넣기)](https://www.acmicpc.net/problem/11899)

<img src="https://img.shields.io/badge/Level-Silver 4-lightgrey"> <img src="https://img.shields.io/badge/Memory-1112%20KB-blue"> <img src="https://img.shields.io/badge/Time-0%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-442%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 입력받은 문자열에서 **' ( ' 가 나왔을 경우 push**한다.  아닐 경우에는 우선 스택이 비어있는지 확인한다. 만약에 <u>비어 있다면 올바르지 않은 괄호열이므로 카운트를 하나 더한다.</u> 비어있지 않을 경우 올바른 괄호열이므로 pop한다.
> - 모든 반복이 종료된 후 <u>스택에 괄호가 남아있다면 올바르지 않은 괄호열이므로 pop</u>해주고 할 때마다 카운트를 하나 더한다.
