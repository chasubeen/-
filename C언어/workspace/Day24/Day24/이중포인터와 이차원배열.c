#include<stdio.h>

void main() {
	int ar[2][5] = {
		{1,2,3,4,5},
		{1,2,3,4,5}
	};
	int *par = ar[0]; // 2차원배열의 첫번째 배열명
	int **dbpar = &par;
	printf("ar[0][0]:%d\n", ar[0][0]);
	printf("dbpar[0][0]:%d\n", dbpar[0][0]);
}