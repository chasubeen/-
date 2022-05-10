/*
문제
10개의 원소를 저장할 수 있는 배열을 선언한 후 포인터 변수를 이용하여 
자료를 입력받아 홀수의 개수와 짝수의 개수를 출력하는 프로그램을 작성하시오.
입력 예
3 5 10 52 1 97 36 25 13 29
출력 예
odd : 7
even : 3
*/

#include<stdio.h>

void main() {
	int a[10];
	int *p = a;
	int odd = 0, even = 0;
	
	for (int i = 0; i < 10; i++) {
		scanf(" %d", &p[i]);
		if (p[i] % 2 == 0) {
			even++;
		}
		else {
			odd++;
		}
	}
	printf("odd : %d\n", odd);
	printf("even : %d\n", even);
}

