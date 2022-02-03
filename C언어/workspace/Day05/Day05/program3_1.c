#include<stdio.h>

void main() {
	// 변수의 생성: 자료형 변수명; (한 번만 가능하다!!)
	int a = 20, b = 10, c; // c: 결과값을 저장하는 변수
	// 변수에 값 저장: 변수명 = 값;
	c = a + b;
	printf("%d+%d = %d\n", a, b, c);

	c = a - b;
	printf("%d-%d = %d\n", a, b, c);

	printf("%d*%d = %d\n", a, b, a*b);
	printf("%d/%d = %d\n", a, b, a/b);

}