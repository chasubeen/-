/*
문제
정수의 연산식을 입력받아 연산을 위한 함수를 호출하여
4칙연산(+ - * /)의 연산결과를 출력하는 프로그램을 작성하시오.
('/'의 경우는 정수 부분만 출력하고 4칙연산 이외의 연산 결과는 0으로 한다.)
( if_else 문으로 작성하세요.)

입력 예
10 + 20
출력 예
10 + 20 = 30
*/
#include <stdio.h>

void compute(int a, int b, char com)
{
	if (com == '+')
		printf("%d + %d = %d\n", a, b, a + b);
	else if (com == '-')
		printf("%d - %d = %d\n", a, b, a - b);
	else if (com == '*')
		printf("%d * %d = %d\n", a, b, a*b);
	else if (com == '/')
		printf("%d / %d = %d\n", a, b, a / b);
	else
		printf("%d %c %d = %d\n", a, com, b, 0);
}

int main()
{
	int a, b;
	char com;
	scanf("%d %c %d", &a, &com, &b);
	compute(a, b, com);
}