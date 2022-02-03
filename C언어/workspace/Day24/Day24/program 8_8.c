#include<stdio.h>

int main() {
	int num1 = 10, num2 = 20;
	int *ptr1 = &num1, *ptr2 = &num2;
	int **dbptr1 = &ptr1, **dbptr2 = &ptr2;

	int sum;
	sum = num1 + num2;
	printf("num1+num2 = %d\n", sum);
	sum = *ptr1 + *ptr2;
	printf("*ptr1+*ptr2=%d\n", sum);
	sum = **dbptr1 + **dbptr2;
	printf("**dbptr1+**dbptr2=%d\n", sum);

	return 0;
}