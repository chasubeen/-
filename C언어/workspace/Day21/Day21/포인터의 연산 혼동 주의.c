#include<stdio.h>

void main() {
	int x = 100;
	int *px = &x;

	// 초기값 출력
	printf("x:%d\n", x);
	printf("&x:%d\n", &x);
	printf("*px:%d\n", *px);
	printf("px:%d\n", px);
	// 1) px++
	px++;
	printf("x:%d\n", x);
	printf("&x:%d\n", &x);
	printf("*px:%d\n", *px);
	printf("px:%d\n", px);

	// 2) *px++
	px = &x;
	printf("x:%d\n", x);
	printf("&x:%d\n", &x);
	printf("*px:%d\n", *px);
	printf("*px++:%d\n", *px++);
	printf("px:%d\n", px);
	// 3) (*px)++
	px = &x;
	(*px)++;
	printf("x:%d\n", x);
	printf("&x:%d\n", &x);
	printf("*px:%d\n", *px);
	printf("px:%d\n", px);

}