#include<stdio.h>

void main() {
	int sum = 0;
	int i; //i 변수가 for문 밖에 정의되어 있어야 i변수를 사용할 수 있다.
	for (i = 1; i <= 100;i++) {
		sum += i;
		printf("%d까지의 합은 %d\n",i,sum);
		if (sum >= 200) {
			break;
		}
	}
	printf("합이 200보다 커지게 되는 경우는 1부터 %d까지의 합입니다.\n",i);
}