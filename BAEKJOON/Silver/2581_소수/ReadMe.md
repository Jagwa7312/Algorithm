# Q 2581 (소수)

<img src="https://img.shields.io/badge/Level-Silver 5-lightgrey"> <img src="https://img.shields.io/badge/Memory-1112%20KB-blue"> <img src="https://img.shields.io/badge/Time-16%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-337%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 두 수를 입력받은 뒤 반복문을 통하여 소수 판별을 한다.
>
> - 반복문을 아래와 같이 작성하는 이유는 **소수는 1과 자기 자신을 제외한 약수가 없기 때문**이다.
>
>   ```c
>   for (j = 2; j < i; j++)
>   ```
>
> - 반복문을 수행하는 과정에서 나누어 떨어지는 수가 있다면 소수가 아니므로 반복문을 탈출한다.
>
>   만약 없다면 약수가 없는 것이므로 소수이다.
>
> - 소수가 하나도 없을 경우 -1을 출력한다.
