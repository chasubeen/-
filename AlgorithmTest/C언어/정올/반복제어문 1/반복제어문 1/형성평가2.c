/*
����
0 �̻��� �������� �������� ���еǾ� �ݺ������� �־�����.
0�� �ԷµǸ� �ݺ����� ���߰� �� ������ �Է¹��� ���鿡 ���Ͽ�
Ȧ���� ������ ¦���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
9 7 10 5 33 65 0
��� ��
odd : 5
even : 1
*/

#include<stdio.h>

void main() {
	int num;
	int odd = 0, even = 0;
	while (1) {
		scanf("%d", &num);
		if (num == 0) {
			break;
		}
		else if (num % 2 == 0) {
			even++;
		}
		else {
			odd++;
		}
	}
	printf("odd : %d\n", odd);
	printf("even : %d\n", even);
}