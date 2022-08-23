#include<stdio.h>
#include<stdlib.h>

double meanof(const int a[], int n);

void main() {
	int i;
	int* height; // �迭�� ù ��° ����� ������
	int number;
	printf("��� ��: ");
	scanf("%d", &number);
	height = calloc(number, sizeof(int)); // ��� ������ number�� Ű �迭 ����
	printf("%d ����� Ű�� �Է��ϼ���.\n", number);
	for (i = 0; i < number; i++) {
		printf("height[%d] : ", i);
		scanf("%d", &height[i]);
	}
	printf("Ű�� ����� %.2f�Դϴ�.\n", meanof(height, number));
	free(height);

}

/* ��� ������ n�� �迭 a�� ��ҵ��� ��� ���ϱ� */
double  meanof(const int a[], int n) {
	int i;
	int sum = a[0]; // �ִ�
	for (i = 1; i < n; i++)
		sum += a[i];
	return sum / n;
}