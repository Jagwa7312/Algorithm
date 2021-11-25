# [Q 4949 (균형잡힌 세상)](https://www.acmicpc.net/problem/4949)

<img src="https://img.shields.io/badge/Level-Silver 4-lightgrey"> <img src="https://img.shields.io/badge/Memory-1116%20KB-blue"> <img src="https://img.shields.io/badge/Time-4%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-792%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 가장 먼저 균형잡힌 문장인지 체크하기 위한 flag 변수를 1로 초기화한다. 1일 경우 균형잡힌 문장이다.
> - 문자열을 입력받은 뒤 가장 먼저 **' ( ' 나 ' [ ' 가 나오면 스택에 push**한다. 반대로 **' ) ' 나 ' ] ' 가 나오면 먼저 현재 스택이 비어 있는지 확인**한다. <u>스택이 비어 있다면 짝이 되는 괄호가 push되지 않은 상태이므로 균형잡힌 문장이 아니다.</u> 따라서 flag를 0으로 초기화하고 반복문을 탈출한다.
> - 스택이 비어 있지 않다면, 스택의 top 값이 현재 괄호와 짝이 된다면 pop 하고 그렇지 않다면 flag를 0으로 초기화하고 탈출한다. 이 과정은 ''( ( ] ) )' 같은 문자열일 때를 걸러주는 과정이다. 왼쪽 괄호는 push하지만 반대쪽은 그렇지 않기 때문이다. 따라서 현재 스택에 있는 문자가 '( ('  이라면  스택의 top과 ' ] '는 짝이 되지 않는다.
