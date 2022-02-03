#include<stdio.h>

extern int i, j; //외부변수
extern void sum();
void main() {

	printf("정수 입력:");
	scanf("%d", &i); //외부변수 i에 값 저장
	printf("정수 입력:");
	scanf("%d", &j); //외부변수 j에 값 저장

	sum(); // 함수 호출
	printf("프로그램 종료\n");

}
