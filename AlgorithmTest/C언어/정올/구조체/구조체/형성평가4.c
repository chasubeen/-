/*
����
� �л��� Ű�� �ƹ����� ��Ӵ��� Ű�� ��պ��� 5cm ũ�� �����Դ� �ƹ����� ��Ӵ��� �������� ��պ��� 4.5kg �����ٰ� �Ѵ�.
Ű�� �����Ը� ��������� ���� ����ü�� �����ϰ� �ƹ����� ��Ӵ��� Ű�� �����Ը� �Է¹޾� �л��� Ű�� �����Ը� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
Ű�� �����̸� �����ϰ� �����Դ� �ݿø��Ͽ� �Ҽ� ù°�ڸ����� ��Ÿ����.
�Է� ��
175 68.8
166 56.4
��� ��
height : 175cm
weight : 58.1kg
*/

#include<stdio.h>

typedef struct Family {
	int height;
	float weight;
}family;

void main() {
	family m, d;
	scanf("%d %f", &m.height, &m.weight);
	scanf("%d %f", &d.height, &d.weight);

	printf("height : %dcm\n", (m.height + d.height) / 2 + 5);
	printf("weight : %.1fkg\n", (m.weight + d.weight) / 2 - 4.5);
}