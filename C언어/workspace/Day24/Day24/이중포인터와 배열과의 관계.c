#include<stdio.h>

void main() {
	int ar[5] = { 1,2,3,4,5 };
	int *par = ar; //ar==&ar[0]
	int **dbpar = &par;
	printf("ar[0]:%d\n", ar[0]);
	printf("*par:%d\n", *par);
	printf("**dbpar:%d\n", **dbpar);
}