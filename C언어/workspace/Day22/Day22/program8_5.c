#include<stdio.h>

void main() {
	int a[5] = { 10,20,30,40,50 };
	int *ptr; // 정수형 변수이 주소를 저장할 정수형 포인터
	ptr = a; // ptr = &a[0]; -> 배열의 이름 = 배열의 첫 번째 요소의 주소
	printf("*ptr:%d\n", *ptr); // ptr= &a[0]안에 들어있는 값 가져옴(*: 간접참조연산자)
	ptr++;
	printf("*ptr:%d\n", *ptr); // ptr= &a[1]안에 들어있는 값 가져옴

}