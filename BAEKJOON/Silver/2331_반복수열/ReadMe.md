# Q 2331 (반복수열)

<img src="https://img.shields.io/badge/Level-Silver 4-lightgrey"> <img src="https://img.shields.io/badge/Memory-1112%20KB-blue"> <img src="https://img.shields.io/badge/Time-0%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-542%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 반복수열은 다음과 같다. ( D[1] = A / D[n] = D[n-1]의 각 자리의 숫자를 P번 곱한 수들의 합 )
>
> - 최대 수열의 길이가 어느 정도인지 모르기 때문에 **MAX를 1000으로 정의**한다. MAX만큼의 배열을 선언한 후 배열의 가장 첫번째 값에 A를 대입한다.
>
> - 반복문 안에서 수열의 값들을 구해 배열에 대입한다. 그 후 <u>배열 안에서 첫 번째로 같은 값이 나오는 인덱스를 저장해준 뒤 해당 인덱스를 출력</u>해준다.
>
>   *예시로, 배열에서 다섯 번째 값부터 반복된다면 인덱스는 4이다. 따라서 인덱스를 그대로 출력해주면 된다.*
