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

void main() {
	int a, b;
	int *ptr1 = &a;
	int *ptr2 = &b;
	scanf("%d", ptr1);
	scanf("%d", ptr2);
	printf("%d + %d = %d\n", *ptr1, *ptr2, *ptr1 + *ptr2);
	printf("%d - %d = %d\n", *ptr1, *ptr2, *ptr1 - *ptr2);
	printf("%d * %d = %d\n", *ptr1, *ptr2, *ptr1 * *ptr2);
	printf("%d / %d = %d\n", *ptr1, *ptr2, *ptr1 / *ptr2);
}