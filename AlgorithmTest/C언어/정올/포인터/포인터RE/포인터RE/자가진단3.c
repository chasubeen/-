/*
����
������ ���� �� ���� �̿��Ͽ� �� ���� �Է¹ް� ��Ģ ������ �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
35 6
��� ��
35 + 6 = 41
35 - 6 = 29
35 * 6 = 210
35 / 6 = 5
*/

#include<stdio.h>

int main(void) {
	int a, b;
	int *ptr1, *ptr2;
	ptr1 = &a, ptr2 = &b;

	scanf("%d %d", ptr1, ptr2);
	printf("%d + %d = %d\n", *ptr1, *ptr2, *ptr1 + *ptr2);
	printf("%d - %d = %d\n", *ptr1, *ptr2, *ptr1 - *ptr2);
	printf("%d * %d = %d\n", *ptr1, *ptr2, *ptr1 * *ptr2);
	printf("%d / %d = %d\n", *ptr1, *ptr2, *ptr1 / *ptr2);

}