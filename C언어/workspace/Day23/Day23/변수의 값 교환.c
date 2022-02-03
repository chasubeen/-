#include<stdio.h>
void swap(int*,int*);
void main() {
	int x = 10, y = 20; //main 지역변수
	int temp;
	printf("x:%d y:%d\n", x, y);
	temp = x;
	swap(&x, &y);
	printf("main: x:%d y:%d\n", x, y);
}

void swap(int *px, int *py) { //swap 매개변수
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
	printf("swap() 실행!\n");
	printf("swap: x:%d, y:%d\n", *px, *py);
}