# Q 9020 (골드바흐의 추측)

<img src="https://img.shields.io/badge/Level-Silver 5-lightgrey"> <img src="https://img.shields.io/badge/Memory-1116%20KB-blue"> <img src="https://img.shields.io/badge/Time-1752%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-657%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 먼저 **에라토스테네스의 체**를 이용하여 소수들을 찾아준 뒤 새로운 배열 안에 인덱스 0번부터 옮겨주는 작업을 하였다.
>
> - min 변수를 통하여 배열 안에서 가장 큰 소수와 가장 작은 소수의 차이를 저장한다. 그 다음 수를 입력 받고 소수가 저장된 배열 안에서 반복문을 통하여 **두 소수를 더했을 때 입력받은 수와 똑같을 경우**를 찾는다.
>
> - 같은 경우를 찾았을 때, <u>두 소수의 차이를 min 변수와 비교하여 더 작을 경우 min 변수에 넣는다.</u>
>
>   *이 작업은 골드바흐의 파티션 수와 관계 없이 항상 수행해 준다.*
>
> - 만약 파티션이 여러 개일 경우 위에서 서술하였던 방법을 통해 차이가 가장 작은 두 소수를 각각 변수 a, b에 넣은 후 출력한다.

