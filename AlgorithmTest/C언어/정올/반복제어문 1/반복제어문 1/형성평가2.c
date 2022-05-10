/*
문제
0 이상의 정수들이 공백으로 구분되어 반복적으로 주어진다.
0이 입력되면 반복문을 멈추고 그 전까지 입력받은 수들에 대하여
홀수의 개수와 짝수의 개수를 출력하는 프로그램을 작성하시오.
입력 예
9 7 10 5 33 65 0
출력 예
odd : 5
even : 1
*/

#include<stdio.h>

void main() {
	int num;
	int odd = 0, even = 0;
	while (1) {
		scanf("%d", &num);
		if (num == 0) {
			break;
		}
		else if (num % 2 == 0) {
			even++;
		}
		else {
			odd++;
		}
	}
	printf("odd : %d\n", odd);
	printf("even : %d\n", even);
}