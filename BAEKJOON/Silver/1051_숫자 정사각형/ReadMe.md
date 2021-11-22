# [Q 1051 (숫자 정사각형)](https://www.acmicpc.net/problem/1051)

<img src="https://img.shields.io/badge/Level-Silver 3-lightgrey"> <img src="https://img.shields.io/badge/Memory-1116%20KB-blue"> <img src="https://img.shields.io/badge/Time-0%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-446%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - N, M(1 ≤ N, M ≤ 50) 이므로 50x50크기의 배열을 만든다.
>
> - N x M 크기의 직사각형에서 가장 큰 정사각형은 두 변 중 더 짧은 변의 길이가 최대 길이이다. 문제의 예제 입력 1을 표로 나타내 보자. 다음과 같은 직사각형이 된다.
>
>   | 4     | **2** | **1** | **0** | **1** |
>   | ----- | ----- | ----- | ----- | ----- |
>   | **2** | **2** | **1** | **0** | **0** |
>   | **2** | **2** | **1** | **0** | **1** |
>
>   이 3 x 5 크기의 직사각형에서 가장 큰 정사각형은 한 변이 3인 정사각형이다.
>
>   ```c
>   min = (n < m) ? n : m;
>   ```
>
>   따라서 배열의 인덱스를 옮겨갈 수 있는 최대 값을 M, N중에 더 작은 값을 min 이라는 변수에 저장해 주었다.
>
> - 첫 번째 반복문에서 배열의 인덱스가 최대로 옮겨갈 수 있는 범위를 지정해 준다. 즉, 확인할 정사각형의 변의 길이이다. 변의 길이인데 0부터 시작하는 이유는 인덱스 번호가 0부터 시작하기 때문이다.
>
>   ```c
>   for (int i = 0; i < min; i++)
>   ```
>
> - 두 번째, 세 번째 반복문에서는 실제로 인덱스를 옮겨서 정사각형을 확인한다.
>
>   ```c
>   for (int j = 0; j < n - i; j++)
>   	for (int k = 0; k < m - i; k++)
>           if (quad[j][k] == quad[j + i][k + i] && quad[j][k] == quad[j + i][k] && quad[j][k] == quad[j][k + i])
>   			max = i + 1;
>   ```
>
>   여기서 두 반복문의 범위에서 i만큼을 빼 준 이유는 정사각형임을 확인할 때 배열의 인덱스에 정사각형의 변의 길이만큼 더해서 확인해야 한다. 하지만 더하는 정사각형 변의 길이보다 남은 인덱스의 크기가 더 다면 배열의 범위를 넘어서기 때문에 정사각형의 변의 길이만큼을 각 직사각형의 변의 길이에서 뺀 범위만큼 반복한다.
>
>   ![1051_quadpicture](https://user-images.githubusercontent.com/93855602/142832793-f442aa8e-c61f-45c8-95ee-4c1e461909b4.png)
>
>   
>
> - 정사각형 크기의 최댓값을 구할 때는 작은 순서대로 정사각형을 탐색하기 때문에 따로 비교할 필요 없이 가장 마지막에 나오는 정사각형이 가장 크다. 직사각형 인덱스 번호의 시작은 0이므로 최댓값에 1을 더해서 크기를 구해주면 된다.

