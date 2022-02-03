#include<stdio.h>

// 자료형 재정의
typedef unsigned int unit;
typedef int integer;

void main() 
{
	unit number1;
	integer number2;

	number1 = 100;
	number2 = 200;

	printf("number1=%d, number2=%d\n", number1, number2);

}
