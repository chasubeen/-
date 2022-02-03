#include<stdio.h>
void swap(int **ptr1, int **ptr2);
void main() {
	int num1 = 10, num2 = 20;
	int *p1 = &num1, *p2 = &num2;
	printf("Before %d,%d\n", num1, num2);
	swap(&p1, &p2);
	printf("After %d,%d\n", num1, num2);
}
void swap(int **ptr1, int **ptr2) {
	int temp = **ptr1;
	**ptr1 = **ptr2;
	**ptr2 = temp;
}