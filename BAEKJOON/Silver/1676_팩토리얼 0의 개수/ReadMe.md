# [Q 1676 (팩토리얼 0의 개수)](https://www.acmicpc.net/problem/1676)

<img src="https://img.shields.io/badge/Level-Silver 4-lightgrey"> <img src="https://img.shields.io/badge/Memory-1112%20KB-blue"> <img src="https://img.shields.io/badge/Time-0%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-114%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 다른 작업을 할 필요 없이 N(0 ≤ N ≤ 500) 을 입력받은 후 그 수를 각각 5, 25, 125로 나누어준 뒤 더해주기만 하면 된다.
> - **10!** 을 곱셈으로 풀어서 써 보면**10**x9x8x7x6x**5**x4x3x**2**x1인데 이 식에서 10을 총 두 번 만들 수 있다. <u>따라서 10의 개수가 곧 가장 뒤에 붙는 0의 개수임을 알 수 있다.</u> 또한, 2의 배수의 수가 5의 배수의 수보다 훨씬 많으므로 **5의 배수의 수가 곧 10의 개수**와 같다.
> - N이 500 이하이므로 5^4인 625는 조건을 만족하지 않는다. 따라서 5, 25, 125의 배수를 구해 더하면 된다. 25와 125 모두 5의 배수인데 한번 더 더하는 이유는 이 문제에서는 5의 개수를 구하는 것이기 때문이다. <u>25와 125는 각각 5의 제곱, 세제곱이기때문에 한번씩 더 더해주어야 한다.</u>

