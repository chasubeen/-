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


// �ִ� ���ϱ�
double max(double a, double b, double c) {
	double max;
	max = a > b ? a : b;
	max = max > c ? max : c;
	return max;
}
// �ּڰ� ���ϱ�
double min(double a, double b, double c) {
	double min;
	min = a < b ? a : b;
	min = min < c ? min : c;
	return min;
}
// �߰��� ���ϱ�
double center(double a, double b, double c) {
	if (a < max(a, b, c) && a>min(a, b, c)) {
		return a;
	}
	else if (b < max(a, b, c) && b > min(a, b, c)) {
		return b;
	}
	else;
	return c;
}
// �ø� ���
int up(double x) {
	return floor(x) + 1;
}
// ���� ���
int down(double x) {
	if (x > 0) {
		return floor(x);
	}
	else {
		floor(x);
		return x - 1;
	}
}
// �ݿø� ���
int updown(double x) {
	if (x > 0) {
		x += 0.5; // 0.5 �߰�
		floor(x); // �Ҽ��� ����
		return x;
	}
	else {
		x -= 0.5;
		floor(x);
		return x;
	}
}
		
int main() {

	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("%d %d %d\n", up(max(a, b, c)), down(min(a, b, c)), updown(center(a, b, c)));

	return 0;

}