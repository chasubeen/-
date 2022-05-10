/*
- 문제
두 개의 실수를 입력받아 모두 4.0 이상이면 "A", 모두 3.0 이상이면 "B", 
아니면 "C" 라고 출력하는 프로그램을 작성하시오.
- 입력 예(1)
4.3 3.5
- 출력 예(1)
B
- 입력 예(2)
4.0 2.9
- 출력 예(2)
C
*/

#include<stdio.h>

void main() {
	float a, b;
	scanf("%f %f", &a, &b);

	if (a >= 4.0 && b >= 4.0) {
		printf("A\n");
	}
	else if (a >= 3.0 && b >= 3.0) {
		printf("B\n");
	}
	else {
		printf("C\n");
	}
}