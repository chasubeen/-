#include<stdio.h>

void main() {
	int a = 0;
	do {
		++a;
		printf("do~while문이 %d번 반복되었습니다.\n", a); // do~while문은 적어도 1번은 실행된다.
		                                                // do문 실행 -> 증감 -> while문에서 비교
	} 
	while (a < 10);
}