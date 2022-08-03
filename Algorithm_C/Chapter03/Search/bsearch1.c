// bsearch �Լ��� ����� ������������ ���ĵ� �迭 �˻�
#include<stdio.h>
#include<stdlib.h>

// ������ ���ϴ� �Լ�(��������)
int int_cmp(const int* a, const int* b) {
	if (*a < *b)
		return -1; // ù ��° �μ��� ����Ű�� ���� �� ������ ���� ��ȯ
	else if (*a > *b)
		return 1; // ù ��° �μ��� ����Ű�� ���� �� ��° �μ��� ����Ű�� ���� ������ 0 ��ȯ
	else
		return 0; // ù ��° �μ��� ����Ű�� ���� �� ũ�� ��� ��ȯ
}

void main() {
	int i, nx, ky;
	int* x; // �迭�� ù ��° ��ҿ� ���� �ּҰ��� ������ ����
	int* p;
	puts("bsearch �Լ��� ����Ͽ� �˻�");
	printf("��� ����: ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int)); // ����� ������ nx�� int�� �迭 ���� -> �ʱ�ȭ

	printf("������������ �Է��ϼ���.\n");
	printf("x[0]: ");
	scanf("%d", &x[0]);
	for (i = 1; i < nx; i++) {
		do {
			printf("x[%d]: ", i);
			scanf("%d", &x[i]);
		} while (x[i] < x[i - 1]);
	}
	printf("�˻���: ");
	scanf("%d", &ky);
	p = bsearch(&ky, // �˻����� ���� ������
				x, // �迭
				nx, // ����� ����
				sizeof(int), // ����� ũ��
		(int(*)(const void*, const void*)) int_cmp // �� �Լ�
		);
	if (p == NULL)
		puts("�˻��� �����߽��ϴ�.");
	else
		printf("%d��(��) x[%d]�� �ֽ��ϴ�.\n", ky, (int)(p - x));
	free(x);
}