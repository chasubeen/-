/*
����
5���� ������ �Է¹޾� �� ������ ���밪�� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
35 -20 10 0 55
��� ��
120
*/

#include<stdio.h>
#include<math.h>

int abs_sum() {
	int a, sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &a);
		sum += abs(a);
	}
	return sum;
}

int main(void) {
	printf("%d\n", abs_sum());
	return 0;
}

