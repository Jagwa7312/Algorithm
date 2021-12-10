# [Q 23351 (물 주기)](https://www.acmicpc.net/problem/23351)

<img src="https://img.shields.io/badge/Level-Silver 3-lightgrey"> <img src="https://img.shields.io/badge/Memory-1116%20KB-blue"> <img src="https://img.shields.io/badge/Time-0%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-818%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 우선 화분의 개수만큼 초기값에 k를 전부 대입한다. 그 후 day를 1로 초기화한다.
> - 화분의 수분이 0인지 체크하는 변수 flag를 0으로 초기화하고 화분 중 하나라도 수분이 0이 되면 flag를 1로 변경한다.
> - 반복문 내에서 현재 화분의 수분양을 기준으로 하여 오름차순으로  계속 정렬한다. **현재 수분이 가장 적은 앞에서부터 a개의 화분에 b만큼의 수분을 더한다.** 그후 모든 화분에서 수분을 1만큼 빼 준다. 동시에 화분의 수분이 0인지 체크한다.
> - 수분이 0인 화분이 없으면 day를 하나 더해주고 위 과정을 다시 반복한다.

