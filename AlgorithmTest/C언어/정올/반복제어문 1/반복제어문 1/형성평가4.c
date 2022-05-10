/*
문제
0 이 입력될 때까지 정수를 계속 입력받아 3의 배수와 5의 배수를 제외한 수들의 개수를 출력하는 프로그램을 작성하시오.
입력 예
1 2 3 4 5 6 7 8 9 10 0
출력 예
5
*/

#include<stdio.h>

void main() {
	int a;
	int count = 0;
	while (1) {
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		if (a % 3 != 0 && a % 5 != 0) {
			count++;
		}
	}
	printf("%d\n", count);
}