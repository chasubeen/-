#include<stdio.h>

void main() {
	int a;
	printf("%d\n", a);
	printf("%p\n", &a); // &변수명: 변수의 주소, %p: 해당 포인터의 크기만큼 메모리를 읽어와 16진수로 표현 
}