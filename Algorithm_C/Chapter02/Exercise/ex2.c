#include<stdio.h>
#include<stdlib.h>

int sumof(int[], int);

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
	printf("Ű�� ���� %d�Դϴ�.\n", sumof(height, number));
	free(height);

	return 0;
}

/* ��� ������ n�� �迭 a�� ��ҵ��� �� ���ϱ� */
int sumof(const int a[], int n) {
	int i;
	int sum = a[0]; // �ִ�
	for (i = 1; i < n; i++)
		sum += a[i];
	return sum;
}