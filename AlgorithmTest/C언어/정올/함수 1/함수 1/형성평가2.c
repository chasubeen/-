/*
����
1���� ���޹��� �������� ���� ����ϴ� �Լ��� �ۼ��ϰ� 
1000 ������ �ڿ����� �Է¹޾� �ۼ��� �Լ��� �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
100
��� ��
5050
*/

#include<stdio.h>

int add(a) {
	int sum = 0;
	for (int i = 1; i <= a; i++) {
		sum += i;
	}
	printf("%d\n", sum);
	return 0;
}

void main() {
	int a;
	scanf("%d", &a);
	add(a);
}