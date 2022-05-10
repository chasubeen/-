/*
문제
정수를 입력받아 1부터 입력받은 정수까지를 차례대로 출력하는 프로그램을 작성하시오.
입력 예
5
출력 예
1 2 3 4 5
*/

#include<stdio.h>

void main() {
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++) {
		printf("%d ", i);
	}
	printf("\n");
}