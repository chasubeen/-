/*
����
�������� 3.141592�� ��ũ�� ����� �����ϰ� ���� ���̸� ���ϴ� ��ũ�� �Լ��� �ۼ��Ͽ� 
�������� �Է¹޾� ���� ���̸� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (�Ҽ� ��°�ڸ����� �ݿø�)
�Է� ��
radius : 1.5
��� ��
area = 7.069
Hint!
���� ���� : ������ �� ������ �� ������(��)
*/

#include<stdio.h>
#define PI 3.141592
#define CIRCLE_SQUARE(x) (x)*(x)*(PI)

int main(void) {
	float r;
	printf("radius : ");
	scanf("%f", &r);
	printf("area = %.3lf\n", CIRCLE_SQUARE(r));
}