#include<stdio.h>

void main() {
	int a = 10, b = 20, c = 30;
	int *ar[3];
	ar[0] = &a;
	ar[1] = &b;
	ar[2] = &c;

	for (int i = 0; i < 3; i++) {
		printf("*ar[%d]:%d\n", i, *ar[i]);
	}
	*ar[0] = 100;
	printf("a ; %d\n", a);
}
