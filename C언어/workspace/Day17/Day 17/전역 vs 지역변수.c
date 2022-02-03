#include<stdio.h>

int x = 3; //전역변수
void f1(); // 함수의 prototype
void main(){
	int y = 4;
	printf("x:%d\n", x);
	printf("y:%d\n", y); //지역변수
	f1(); // 함수의 호출
}

// 함수의 구현부
void f1() {
	printf("f1() 호출\n");
	printf("x:%d\n", x);
	// printf("y:%d\n", y);  // 지역 변수는 해당 블록 내에서만 사용 가능하다.
}