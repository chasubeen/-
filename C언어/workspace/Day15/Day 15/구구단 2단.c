#include<stdio.h>
// 구구단 2단 출력하기
void main() {
	/*
	printf("2x1=2\n");
	printf("2x2=4\n");
	printf("2x3=6\n");
	printf("2x4=8\n");
	printf("2x5=10\n");
	printf("2x6=12\n");
	printf("2x7=14\n");
	printf("2x8=16\n");
	printf("2x9=18\n");
	*/
	for (int i = 1; i <= 9;i++) {
		printf("2x%d=%d\n", i, 2 * i);
	}
}