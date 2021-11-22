# [Q 1874 (스택 수열)](https://www.acmicpc.net/problem/1874)

<img src="https://img.shields.io/badge/Level-Silver 3-lightgrey"> <img src="https://img.shields.io/badge/Memory-1972%20KB-blue"> <img src="https://img.shields.io/badge/Time-28%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-776%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 코드에서 변수 및 배열들의 의미는 다음과 같다.
>
>   ```c
>   int stack[100001] = { 0 };	// 만들어진 배열을 넣을 스택
>   int arr[100001];	// 만들 수열을 넣을 배열
>   char str[200001];	// +와 -를 넣어 출력할 배열
>   
>   int num_seq = 1, idx_arr = 0, idx_str = 0;
>   // 1부터 N까지의 수, 만들 수열이 저장된 배열의 인덱스, +와 -를 저장할 배열의 인덱스
>   int plus_cnt = 0, minus_cnt = 0;
>   // +의 개수를 세는 카운트, -의 개수를 세는 카운트
>   ```
>
> - 문제에서 가장 핵심이 되는 코드이다. 총 두 부분으로 나누어서 볼 수 있다.
>
>   ```c
>   while (minus_cnt < n)
>   	{
>   		if (arr[idx_arr] != top())
>   		{
>   			push(num_seq);
>   			str[idx_str++] = '+';
>   			num_seq++;
>   			plus_cnt++;
>   		}
>   		else if (arr[idx_arr] == top())
>   		{
>   			pop();
>   			str[idx_str++] = '-';
>   			idx_arr++;
>   			minus_cnt++;
>   		}
>   		if (plus_cnt > n)
>   		{
>   			printf("NO\n");
>   			return 0;
>   		}
>   	}
>   ```
>
> - 반복문은 **minus_cnt가 n보다 작을 때까지 반복**한다. 왜냐하면 pop이 시행될 때 즉, <u>스택에서 수를 뺄 때 minus_cnt가 하나 더해지기 때문에 숫자가 전부 스택에서 빠진다면 당연히 minus_cnt = n</u>일 것이다.
>
>   1. 첫 번째 if문에서는 arr 배열의 가장 첫 번째 부분부터 탐색한다. 만약에 스택의 top 부분과 수열의 첫 번째 수가 다르다면 현재의 num_seq 값을 스택에 push 한다. 그리고 str 배열에 +를 대입한 후 plus_cnt값을 하나 늘려준다. 다음 숫자를 탐색하기 위해 num_seq도 하나 늘린다.
>
>   2. else if문에서는 arr 배열의 해당 인덱스의 값이 스택의 top과 같다면 해당 값을 pop 해준 뒤 +와 마찬가지로 -도 배열에 넣은 뒤 카운트를 하나 늘린다. 이 때는 만들 수열의 값이 탐색이 완료되었으므로 arr 배열의 인덱스를 하나 늘린다.
>   3. 마지막 if문은 수열을 만들 수 없을 경우를 찾는다. 만약에 수가 8개라면 push도 8번, pop도 8번 수행하기 때문에 plus와 minus 카운트 값 모두가 8이다. 그러나 수열을 만들 수 없을 경우 plus 카운트 값이 n보다 커질 수 밖에 없기 때문에 이 경우에는 NO를 출력한 뒤 프로그램을 종료한다.
>
> - 
