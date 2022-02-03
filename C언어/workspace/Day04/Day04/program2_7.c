#include<stdio.h>

void main() {
	const float PI = 3.14; // const(constant) : 상수/ float: 실수형 변수
                           // PI: 심볼릭상수 -> 더이상 값 변경 x
	float pi = 3.14; // pi: 실수형 변수  -> 변경 o
	int radius; // int: 4 byte 정수형
	// PI = 3.14; <- 상수이므로 변경할 수 없음
	pi = 3.14; 

	scanf("%d", &radius); // scanf: 변수에 입력하는 키워드<- 키보드 입력값
	printf("%d*3.14 = %f\n", radius, radius*PI); 


}