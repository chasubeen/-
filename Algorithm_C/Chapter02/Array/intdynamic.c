#include<stdio.h>
#include<stdlib.h>

void main() {
	int* x; // 정수형 포인터 
	x = calloc(1, sizeof(int));
	if (x == NULL) {
		puts("메모리 할당에 실패하였습니다.");
	}
	else {
		*x = 57; // 참조 연산자
		printf("*x = %d\n", *x);
		free(x); // 메모리 해제
	}

	return 0;
}