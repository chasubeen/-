/*
����
100 ������ ���� ������ �Էµȴ�.
while ���� �̿��Ͽ� 1���� �Է¹��� ���������� ���� ���Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
10
��� ��
55
*/

#include<stdio.h>

void main() {
	int num;
	int i = 1, sum = 0;
	scanf("%d", &num);
	while (i <= num) {
		sum += i;
		i++;
	}
	printf("%d\n", sum);
}