/*
����
�� ���� �Ǽ��� �Է¹޾�, 
���� ū ���� �ø��� ������ ����ϰ�,
���� ���� ���� ������ ������ ����� ��, 
���� ���� �ݿø��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�ԷµǴ� �Ǽ��� -1000�̻� 1000�����̴�.

�Է� ��
3.45 51.48 -100.1
��� ��
52 -101 3
*/

#include<stdio.h>
#include<math.h> //�ø�: ceil �Լ�, ���� : floor �Լ�, �ݿø�: floor(N + 0.5); 

int up(float x) {
	return ceil(x);
}

int down(float y) {
	return floor(y);
}

int halfup(float z) {
	return floor(z + 0.5);
}

int main(void) {
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	float max = a >= b ? a : b;
	max = max > c ? max : c;

	float min = a > b ? b : a;
	min = min > c ? c : min;

	float center;
	if (a<max&&a>min)
		center = a;
	else if (b<max&&b>min)
		center = b;
	else
		center = c;

	printf("%d %d %d\n", up(max), down(min), halfup(center));

}