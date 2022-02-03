#include<stdio.h>

void main() {
// 문자열: 각 요소의 자료형이 문자형!
	char str1[] = "Hello"; //NULL 문자(문자열의 끝을 의미하는 문자)가 포함되어 있음!
	char str2[] = { 'h','e','l','l','o'};

	printf("sizeof(str1):%d\n", sizeof(str1));
	printf("sizeof(str2):%d\n", sizeof(str2));

}