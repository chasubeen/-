#include<stdio.h>

void main() {
	int a = 10;
	int *pa; // 정수형 포인터
	pa = &a; // 포인터명 = &변수명

	printf("a = %d\n", a); 
	printf("*pa = %d\n", *pa); //간접 참조 연산자, 주소로 접근하여 저장된 값을 가져오는 방법

	printf("&a=%p\n", &a); // a의 주소
	printf("&pa = %p\n", &pa); //포인터변수 pa의 주소
	printf("pa = %p\n", pa); // 포인터변수 pa의 값 == a 변수의 주소
	printf("&*pa = %p\n", &*pa); // 포인터변수 pa로 접근한 값(*)의 주소(&)
	

}