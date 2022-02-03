#include<stdio.h>

void main() {
	int sign; // 입력받은 신호를 저장할 변수
	printf("신호등 프로그램\n");
	printf("신호를 입력하시오.(빨간불은 1, 초록불은 2):");
	scanf("%d", &sign);

	if (sign== 1) {
		printf("정지\n");
	}
	else if (sign == 2) {
		printf("출발\n");
	}
	else {  // else는 바로 위에 오는 조건식만을 부정한다.
		printf("잘못입력하셨습니다.\n");
	}
}