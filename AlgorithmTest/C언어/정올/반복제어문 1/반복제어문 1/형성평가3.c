/*
����
0 ���� 100 ������ ������ ��� �Է¹޴ٰ� ������ ����� ���� �ԷµǸ� 
�� �������� �Էµ� �ڷ��� �հ�� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
(����� �ݿø��Ͽ� �Ҽ� ù°�ڸ����� ����Ѵ�.)
�Է� ��
55 100 48 36 0 101
��� ��
sum : 239
avg : 47.8
*/

#include<stdio.h>

void main() {
	int a;
	int sum = 0, temp = 0;
	while (1) {
		scanf("%d", &a);
		if (a > 100 || a < 0) {
			break;
		}
		sum += a;
		temp++;
	}
	printf("sum : %d\n", sum);
	printf("avg : %.1f\n", sum /(float)temp);
}