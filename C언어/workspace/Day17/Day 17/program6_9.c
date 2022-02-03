#include<stdio.h>

int i, j, k; //전역변수
void sum() {
	k = i + j;
	printf("%d + %d = %d\n", i, j, k); 
}