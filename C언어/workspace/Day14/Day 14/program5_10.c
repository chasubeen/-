#include<stdio.h>

int main() {
	int number;
	while (1) {
		printf("숫자를 입력하세요:");
		scanf("%d", &number);
		if (number < 0) {
			return 0; // main() 프로그램을 종료한다.
		}
		if (number % 2 == 0) {
			printf("짝수입니다.\n");
		}
		else {
			printf("홀수입니다.\n");
		}
	}
}