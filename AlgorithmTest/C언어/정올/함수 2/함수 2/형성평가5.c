/*
����
�� ���� �Ǽ��� �Է¹޾� �հ�� ����� ���Ͽ� ����� �ݿø��� ������ ����ϰ�, 
������ �Է¹��� ���� ���� ���� �ݿø��� �� �հ�� ����� ���Ͽ� ����� �ݿø��� �� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
153.74 34.59 109.5
��� ��
99
100
*/
#include<stdio.h>
int n_round(float x); // �Լ� ����

int main(void) {
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	float sum1 = a + b + c;
	float avg1 = sum1 / 3;
	printf("%d\n", n_round(avg1));

	float sum2 = n_round(a) + n_round(b) + n_round(c);
	float avg2 = sum2 / 3;
	printf("%d\n", n_round(avg2));

}

int n_round(float x) {
	int result = (int)(x + 0.5);
	return result;
}