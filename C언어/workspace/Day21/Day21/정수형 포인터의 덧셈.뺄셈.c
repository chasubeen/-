#include<stdio.h>

void main() {
	int *p1 = 1000; //�ּҰ� �ʱ�ȭ
	int *p2 = 1000;

	printf("(���� ��)p1: %d, p2: %d\n", p1, p2);
	p1++; // p1 = p1+1 
	p2--; // p2 = p2-1
	printf("(���� ��)p1: %d, p2: %d\n", p1, p2); 

}