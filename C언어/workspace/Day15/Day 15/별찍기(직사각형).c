/*
문제
보기와 같이 별(*)을 찍으시오.
***
***
***
*/
#include<stdio.h>

void main() {
	for (int j = 0; j < 3; j++) { // 행(가로 갯수)
		for (int i = 0; i < 3; i++) { // 열(세로 갯수)
			printf("*");
		}
		printf("\n");
	}
}


	