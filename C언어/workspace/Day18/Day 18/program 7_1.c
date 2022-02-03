#include<stdio.h>

void main() {

	int a[3];
	printf("a=%d\n", &a); // %X: 16진수, &a: 주소의 이름 출력!
	printf("a=%d\n", a);  // a: 배열명
	printf("a[0]=%d\n", &a[0]);
	printf("a[1]=%d\n", &a[1]);
	printf("a[2]=%d\n", &a[2]);

	printf("sizeof(a) = %d\n", sizeof(a)); // sizeof(변수) : 변수의 byte값 출력

}