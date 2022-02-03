#include<stdio.h>

void main() {
	int a;
	while (1) {
		printf("숫자입력:");
		scanf("%d", &a);
		if (a == 0) {
			printf("프로그램을 종료합니다\n");
			break; // 반복문 중단
		}
	}

}