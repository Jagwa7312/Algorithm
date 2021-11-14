# 유클리드 호제법(Euclidean Algorithm)



- 유클리드 호제법은 두 정수의 최대공약수(GCD)를 구하는 알고리즘 중 하나이다.

  두 정수 a, b의 최대공약수는 b와 r의 최대공약수와 같다는 성질에 의해서 b를 r로 나눈 나머지 r1을 구한 뒤 다시 r을 r1으로 나눈다. 이 과정을 계속해서 반복한다.

  

- 예를 들어 두 수를 55, 22라고 했을 때 다음과 같은 과정을 통하여 최대공약수를 구한다.

  ```
  GCD(55, 22) = GCD(22, 55 mod 22) = GCD(22, 11) = GCD(11, 22 mod 11) = GCD(11, 0)
  ```

  따라서 최대공약수는 11이 된다.

  유클리드 호제법은 **재귀함수, 반복문** 두 가지 방법을 통하여 구현할 수 있다.

  

  1. **재귀함수**를 통하여 유클리드 호제법 구현하기

     ```c
     #include <stdio.h>
     int Euclidean(int a, int b)
     {
     	if (b == 0) return a;
     	else Euclidean(b, a % b);
     }
     int main()
     {
     	int GCD = Euclidean(55, 22);
     	printf("GCD : %d\n", GCD);
     
     	return 0;
     }
     ```
     
      
     
1. **반복문**을 통하여 유클리드 호제법 구현하기
  
   ```c
     #include <stdio.h>
     
     int Euclidean(int a, int b)
     {
     	int temp;
     
     	while (1)
     	{
     		temp = b;
     		b = a % b;
     		a = temp;
     		if (b == 0) break;
     	}
     	return a;
     }
     int main()
     {
     	int GCD = Euclidean(55, 22);
     	printf("GCD : %d\n", GCD);
     
     	return 0;
     }
   ```
