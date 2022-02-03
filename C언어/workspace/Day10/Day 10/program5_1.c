#include<stdio.h>

void main() {
	int a;

	printf("정수 입력:");
	scanf("%d", &a);
	
	if (a % 2 == 0) {    // 다음 명령이 1줄일 때는 {}로 범위표시를 하지 않아도 된다.
		printf("%d는 짝수입니다.\n", a);
	}
	else {
		printf("%d는 홀수입니다.\n",a);
	}
}