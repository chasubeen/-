#include<stdio.h>

// 1000 이하의 소수 나열하기

void main() {
	int i, n;
	unsigned long counter = 0; // 나눗셈을 시행한 횟수
	for (n = 2; n <= 1000; n++) {
		for (i = 2; i < n; i++) {
			counter++;
			if (n % i == 0) // 나누어 떨어진다 -> 소수가 아니다.
				break; // 더 이상 반복을 수행하지 않고 멈춘다.
		}
		if (n == i) // 마지막까지 나누어떨어지지 않는다. -> 소수이다.
			printf("%d\n", n);
	}
	return 0;
}