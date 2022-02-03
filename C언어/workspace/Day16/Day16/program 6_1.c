#include<stdio.h>

// 함수의 프로토타입(원형) <- 함수의 구조를 보여줌
int avg(int i, int j); // 함수 생성 시 main 위에!(for 함수의 호출)

void main() {
	int a, b, c;
	printf("첫 번째 값:");
	scanf("%d", &a);
	printf("두 번째 값:");
	scanf("%d", &b);

	c = avg(a, b); 
	printf("%d와 %d의 평균값은 %d입니다.\n", a, b, c);
}
// 함수의 구현부
int avg(int i, int j) {  //avg 호출
	int k;
	k = (i + j) / 2;
	return k;
}