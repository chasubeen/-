#include<stdio.h>

void main() {
	int sum = 0,i;
	for (i = 1; i <= 100; i++) {
		if (i % 2 == 0){
			continue; // 짝수일 때는 밑의 코드가 실행되지 않고 입력값이 무시된다.
		}
		sum = sum + i;
		printf("%d까지의 홀수의 합은 %d입니다.\n", i, sum);
	}
	printf("홀수의 합은 %d입니다.\n", sum);
}