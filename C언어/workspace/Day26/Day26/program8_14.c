#include<stdio.h>

void main() {
	int a[100], sum = 0, i, j; //�����޸� ��� -> �޸��� ���� �Ͼ��.��
	float avg;
	printf("�Է��� ������ ����:");
	scanf("%d", &j);
	for (i = 0; i < j; i++) {
		printf("%d��° ������ �Է�:", i + 1);
		scanf("%d", &a[i]);
		sum = sum + a[i];
	}
	avg = sum / (float)j;
	printf("�հ�:%d\n", sum);
	printf("���:%5.3f\n", avg);
}