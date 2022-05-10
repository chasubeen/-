/*
문제
정수 두 개를 입력받고 계산식을 매크로 함수(#define)로 작성하여 두 수의 차를 제곱한 값과 합을 세제곱한 값을 각각 출력하는 프로그램을 작성하시오.
('^'는 연산자가 아니고 거듭제곱을 뜻하는 표시이므로 거듭제곱은 별도로 계산해야함)
입력 예
5 10
출력 예
(5 - 10) ^ 2 = 25
(5 + 10) ^ 3 = 3375
*/

#define def1(x) (x)*(x) // 함수도 #define 형태로 지정할 수 있다.
#define def2(x) (x)*(x)*(x)
#include<stdio.h>


int main(void) {
	int a, b;
	scanf("%d %d",&a, &b);
	printf("(%d - %d) ^ 2 = %d\n", a, b, def1(a - b));
	printf("(%d + %d) ^ 3 = %d\n", a, b, def2(a + b));

	return 0;
}