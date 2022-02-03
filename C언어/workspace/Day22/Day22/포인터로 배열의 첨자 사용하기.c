#include<stdio.h>

void main() {
	int a[4] = { 10,20,30, 40 };
	int *pa = a;

	printf("a[0]:%d\n", a[0]);
	printf("*pa:%d\n", *pa);
	printf("*(pa+0):%d\n", *(pa + 0));
	printf("pa[0]:%d\n", pa[0]);
	printf("pa[1]:%d\n", pa[1]);
	printf("pa[2]:%d\n", pa[2]);
}