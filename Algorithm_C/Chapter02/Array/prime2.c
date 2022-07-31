#include<stdio.h>

// 1000 이하의 소수를 나열
void main() {
	int i, n;
	int prime[500]; // 소수를 저장하는 배열
	int ptr = 0; // 이미 얻은 소수의 개수(초기화)
	unsigned long counter = 0; // 나눗셈 횟수
	prime[ptr++] = 2; // 가장 첫 번쨰 소수는 2이다.
	for (n = 3; n <= 1000; n += 2) { // 2를 젱뢰하고는 소수 중에 짝수가 없음 -> 홀수만 고려한다.
		for (i = 1; i < ptr; i++) { // 이미 얻은 소수들로 나누어보기
									// 홀수에 대해서만 고려 -> 2로 나누어떨어지지 않음
									// 2를 제외한 소수들로 나누어본다.(인덱스가 1부터 시작한다.)
			counter++;
			if (n % prime[i] == 0) // 나누어 떨어진다. -> 소수가 아니다.
				break; // 더 이상의 반복을 멈춘다.
		}
		if (ptr == i) // 마지막까지 나누어 떨어지지 않았다면
			prime[ptr++] = n; // 소수이다. -> 배열에 저장
		}
		for (i = 0; i < ptr; i++)
			printf("%d\n", prime[i]);
		printf("나눗셈을 실행한 횟수: %lu\n", counter);

	}