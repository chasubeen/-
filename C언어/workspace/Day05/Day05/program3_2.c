#include<stdio.h>

void main() {
	int a = 12345;
	float pi = 3.141592;

	printf("a: %d\n", a);
	printf("a: %10d\n", a); // 자릿수 지정(10자리로 표현, 좌측부터 정렬:앞의 5자리 비움 -> 5자리 채워넣기)
	printf("a: %-10d\n", a);// 자릿수 지정(10자리로 표현, 우측부터 정렬:앞의 5자리 채움 -> 5자리 채워넣기)

	printf("pi: %f\n", pi);
	printf("pi:%10.2f\n", pi); // 자릿수 지정(10자리로 표현, .2: 소수점 둘째자리까지 표현)
	printf("pi:%3.2f\n", pi);
}