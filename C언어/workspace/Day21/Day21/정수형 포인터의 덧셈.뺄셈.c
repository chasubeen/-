#include<stdio.h>

void main() {
	int *p1 = 1000; //주소값 초기화
	int *p2 = 1000;

	printf("(연산 전)p1: %d, p2: %d\n", p1, p2);
	p1++; // p1 = p1+1 
	p2--; // p2 = p2-1
	printf("(연산 후)p1: %d, p2: %d\n", p1, p2); 

}