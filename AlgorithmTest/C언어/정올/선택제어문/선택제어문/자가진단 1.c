/*
문제
정수를 입력받아 첫 줄에 입력 받은 숫자를 출력하고 
둘째 줄에 음수이면 “minus” 라고 출력하는 프로그램을 작성하시오.
입력 예(1)
-5
출력 예(1)
-5
minus
입력 예(2)
5
출력 예(2)
5
*/
#include<stdio.h>

void main() {
	int a;
	scanf("%d", &a);
	printf("%d\n", a);
	
	if (a < 0) {
		printf("minus\n");
	}
}