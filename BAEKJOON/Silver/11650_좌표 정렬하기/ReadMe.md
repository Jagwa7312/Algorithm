# [Q 11650 (좌표 정렬하기)](https://www.acmicpc.net/problem/11650)

<img src="https://img.shields.io/badge/Level-Silver 5-lightgrey"> <img src="https://img.shields.io/badge/Memory-2680%20KB-blue"> <img src="https://img.shields.io/badge/Time-64%20ms-brightgreen"> <img src="https://img.shields.io/badge/Length-1151%20B-red"> <img src="https://img.shields.io/badge/Language-C-blueviolet">



> - 점 (x, y)를 저장하는 구조체를 선언하고 자료형은 **dot**으로 정의한다.
>
> - 점의 개수가 (1 ≤ t ≤ 100,000) 이므로 동적 할당을 사용하여 메모리 낭비를 방지하고 최대 점의 개수가 100,000이기 때문에 **병합 정렬**을 사용한다.
>
> - 병합 정렬 과정에서 x 좌표가 같다면 y 좌표로 정렬하는 코드를 다음과 같이 추가하였다.
>
>   ```c
>   	if (a[i].x < a[j].x) sorted[k++] = a[i++];
>   	else if (a[i].x > a[j].x) sorted[k++] = a[j++];
>   	else	//x 좌표가 같다면 y좌표로 정렬
>   	{
>   		if (a[i].y > a[j].y) sorted[k++] = a[j++];
>   		else if (a[i].y < a[j].y) sorted[k++] = a[i++];
>   	}
>   ```

