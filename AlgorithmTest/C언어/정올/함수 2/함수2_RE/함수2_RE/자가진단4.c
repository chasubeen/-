/*
����
���� ���̸� �Է¹޾� �������� ���̸� �Ҽ� ��°�ڸ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
���� ���� = ������ * ������ * 3.14 ���� �̿��Ͻÿ�.
�Է� ��
314
��� ��
10.00
Hint!
���� ���� / 3.14 �� �������� ���ϸ� �ȴ�.
*/

#include<stdio.h>
#include<math.h> //sqrt �Լ� ��� ����(������ ���ϱ�)
float radius(int s) {
	float result = sqrt(s / 3.14);
	return result;
}

int main(void) {
	int square;
	scanf("%d", &square);
	printf("%.2f\n", radius(square));
}