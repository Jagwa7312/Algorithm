# [Q 11653 (소인수분해)](https://www.acmicpc.net/problem/2012)

<img src="https://img.shields.io/badge/Level-Silver 3-lightgrey"> <img src="https://img.shields.io/badge/Memory-4900%20KB-blue"> <img src="https://img.shields.io/badge/Time-144%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-477%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 불만도가 최소가 되게 하는 가장 좋은 방법은 예상 등수를 오름차순으로 정렬하는 것이다. 등수도 오름차순으로 커지기 때문에, 예상 등수도 오름차순으로 커지면 해당 사람의 불만도가 최소가 될 것이다.
> - 불만도의 총 합을 int 자료형으로 선언했을 때 최악의 경우를 생각해보면 1, 2, 3, 4 ... 500,000일 것인데, 이는 499,999 x 500,000 일 것이므로 int의 범위를 넘어가기 때문에 long long 자료형을 사용한다.
