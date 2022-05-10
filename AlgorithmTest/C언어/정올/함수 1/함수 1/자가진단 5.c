/*
문제
10 이하의 두 정수가 주어진다.
이를 입력 받아서 첫 번째 수를 두 번째 수만큼 거듭제곱하여 나온 값을 리턴하는 함수를 작성하여
다음과 같이 출력하는 프로그램을 작성하시오.
입력 예
2 10
출력 예
1024
*/

#include<stdio.h>

// 함수 구현부
int mul(int a, int b) 
{
	int i, j;
	j = 1;

	if (b == 0) { // 0제곱
		return 1;
	}
	for (i = 0; i < b; i++) {
			j = j*a;
		}
		return j;
	}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n",mul(a,b));
}