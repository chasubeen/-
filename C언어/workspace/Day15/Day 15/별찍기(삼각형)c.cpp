/*
문제
보기와 같이 별(*)을 찍으시오.
*
**
***
****
*****
*/
# include<stdio.h>

void main() {
	for (int j = 0; j<5; j++) {
		for (int i = 0; i <= j; i++) {
			printf("*");
		}
		printf("\n");
	}
}