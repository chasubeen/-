#include<stdio.h>
void swap(int*,int*);
void main() {
	int x = 10, y = 20; //main ��������
	int temp;
	printf("x:%d y:%d\n", x, y);
	temp = x;
	swap(&x, &y);
	printf("main: x:%d y:%d\n", x, y);
}

void swap(int *px, int *py) { //swap �Ű�����
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
	printf("swap() ����!\n");
	printf("swap: x:%d, y:%d\n", *px, *py);
}