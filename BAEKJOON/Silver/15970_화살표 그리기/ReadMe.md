# [Q 15970 (화살표 그리기)](https://www.acmicpc.net/problem/15970)

<img src="https://img.shields.io/badge/Level-Silver 4-lightgrey"> <img src="https://img.shields.io/badge/Memory-1116%20KB-blue"> <img src="https://img.shields.io/badge/Time-0%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-909%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 각 점의 위치와 색을 저장할수 있는 구조체를 선언한다. 자료형은 point 라고 정의한다.
>
> - 점의 개수가 (2 ≤ *N* ≤ 5,000) 이므로 동적 할당을 통하여 점과 색을 입력 받을 구조체 배열과 각 점의 화살표의 길이를 저장하는 배열을 만든다.
>
> - <u>퀵 정렬(*N* ≤ 5,000) 을 통하여 점들을 색을 우선순위로 정렬한 뒤 위치순으로 정렬</u>한다.
>
>   정렬하는 이유는 아래 그림을 보자.
>
>   ![](https://upload.acmicpc.net/42d4e7c4-f4c8-4234-ad4b-4bcc86f3502e/-/preview/)
>
>   색깔이 1인 좌표들만 보았을 때 위치가 0-3-5 와 같이 **오름차순으로 정렬**되어 있는 것을 알 수 있다. 즉,  같은 색깔일 경우 가장 첫 번째 점과 마지막 점을 제외하면 **해당 점의 앞, 뒤의 차이만 비교**하면 되는 것을 알 수 있다. 하지만 첫번째인 0번 점은 배열의 가장 첫 번째이기 때문에 화살표 길이의 합을 저장할 변수 sum에 같은 색이면서 바로 뒷 점과의 거리를 미리 대입해 준다. 따라서 **반복문은 인덱스 0번이 아닌 1번부터 시작**한다.
>
> - 색깔의 마지막 점인 것을 알기 위해 조건문을 통하여 앞과 뒤의 색상이 같을 경우만 차이를 구한다. 만약 **색깔의 첫 점**일 경우 <u>앞 점과의 색깔이 다르기 때문에 조건문을 수행하지 않는다.</u> **마지막 점**도 마찬가지다.
>
>   그리고 각 차이값을 비교하여 더 작은 값을 sum 변수에 더한다. 그리고 모든 수행이 종료되었을 경우 해당 값을 출력한다.

