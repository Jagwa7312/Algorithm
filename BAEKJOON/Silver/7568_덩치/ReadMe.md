# Q 7568 (덩치)

<img src="https://img.shields.io/badge/Level-Silver 5-lightgrey"> <img src="https://img.shields.io/badge/Memory-1112%20KB-blue"> <img src="https://img.shields.io/badge/Time-0%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-444%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 먼저 각 사람들의 키와 몸무게를 저장할 수 있는 구조체를 선언하였다. 구조체 자료형은 **Person**으로 정의하였다. 그 후 테스트 케이스를 입력받은 후 **구조체 동적 메모리 할당**을 통하여 테스트 케이스 만큼의 배열을 만들었다.
>
>   *배열을 w[50], h[50]으로 선언해도 되지만 이 문제는 동적 메모리 할당으로 해결하였음.*
>
> - 그 후 각 구조체 배열에 사람의 키와 몸무게를 넣은 후 **브루트포스 알고리즘**을 통하여 기준 사람이 비교하려는 사람들의 몸무게와 키보다 모두 작다면 등수를 하나 더한다.
>
> - 작을 경우로 비교하는 이유는 등수가 올라가는 기준은  해당 사람과 비교하였을 때 덩치가 작을 때이기 때문이다.
>
>   

