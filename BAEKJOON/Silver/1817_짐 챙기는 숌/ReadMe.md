# [Q 1817 (짐 챙기는 숌)](https://www.acmicpc.net/problem/1817)

<img src="https://img.shields.io/badge/Level-Silver 5-lightgrey"> <img src="https://img.shields.io/badge/Memory-1112%20KB-blue"> <img src="https://img.shields.io/badge/Time-0%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-402%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 책의 개수만큼 무게를 입력받은 뒤 배열에 저장한다. 배열의 맨 앞부터 무게를 더하면서 조건을 나누어 탐색한다.
>
>   ```c
>   if (total > m) {
>   	box++;
>   	i--;
>   	total = 0;
>   }
>   ```
>
>   첫 번째 조건은 **무게의 합이 박스에 넣을 수 있는 최대 무게 M 보다 커졌을 때**이다. 무게가 넘어갔다는 것은 박스가 모두 찼다는 의미이므로 박스의 개수를 하나 더하고, 초과된 책을 제외하기 위해 인덱스를 하나 빼준다. 그리고 총 무게를 다시 0으로 초기화한다.
>
>   ```c
>   else if (total == m) {
>   	box++;
>   	total = 0;
>   }
>   ```
>
>   두 번째 조건은 **무게의 합이 최대 무게와 같아졌을 경우**이다. 이 때는 단순히 박스의 개수를 하나 더하고 총합을 다시 0으로 초기화한다.
>
> - 마지막으로 모든 반복이 완료되었을 때, **총합이 0이 아니라면 박스에 책이 들어 있는 상태**이므로 박스의 개수를 하나 더 더해주어야 한다.
