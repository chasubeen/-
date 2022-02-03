#include<stdio.h>

void main() {
	int int_a;
	printf("입력:");

	scanf("%d", &int_a);
	//오류코드 <C4996>: scanf_s("형식지정자", &변수명,sizeof(자료형)); 

	printf("출력: %d\n", int_a);
}