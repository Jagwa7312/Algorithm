# [Q 1747 (소수&팰린드롬)](https://www.acmicpc.net/problem/1747)

<img src="https://img.shields.io/badge/Level-Gold 5-yellow"> <img src="https://img.shields.io/badge/Memory-5036%20KB-blue"> <img src="https://img.shields.io/badge/Time-12%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-698%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 배열의 MAX 값은 1,000,000보다 크면서 가장 작고 팰린드롬 소수인 **1003001**보다 큰 **1003002**로 한다.
>
> - 에라토스테네스의 체를 이용하여 2부터 MAX 까지의 소수를 구한다.
>
> - n부터 MAX까지의 반복문 내부에서는 다음과 같이 실행한다.
>
>   ```c
>   int temp = i, idx = 0, flag = 1;
>   int arr[7];
>   
>   if (number[i] == 0) continue;	//소수가 아니라면 continue
>   else
>   {
>   	while (temp > 0)	//자릿수 분리
>   	{
>   		arr[idx++] = temp % 10;
>   		temp /= 10;
>   	}
>   	int num = arr[0];	//분리된 수 재결합 후 원래 수와 비교
>   	for (int j = 1; j < idx; j++)
>   		num = num * 10 + arr[j];
>   		
>   	if (i != num) flag = 0;	//다르면 팰린드롬이 아님
>   }
>   if (flag)	//맞으면 해당 수 출력 후 break
>   {
>   	printf("%d\n", i);
>   	break;
>   }
>   ```
>
>   처음에 소수인지 아닌지 걸러 주는 작업 후에 수의 자릿수를 분리한다. 이 때 주의해야 할 점은 <u>자릿수를 분리하여 배열에 넣게 되면 자리수가 다음과 같이 거꾸로 저장</u>된다.
>
>   ![1747_example](https://user-images.githubusercontent.com/93855602/143047065-dcdf2b94-90bc-450b-92b1-12a0f9bd0e9a.png)
>
>   그리고 이 수를 다시 자릿수가 바뀐 그대로 정수로 변환한다. *ex) 12345라면 54321로 변환*
>
> - 만약 **팰린드롬이라면 자릿수가 바뀌어도 같은 숫자**이기 때문에 바뀐 숫자와 원래 숫자가 다르다면 팰린드롬이 아니기 때문에 flag 값을 0으로 반환한다.
>
> - 만약 flag = 1이라면 팰린드롬이면서 가장 작은 소수이기 때문에 출력하고 반복문을 탈출한다.
