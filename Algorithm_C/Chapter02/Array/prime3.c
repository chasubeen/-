#include<stdio.h>

// 1000 ������ �Ҽ� ���ϱ�
void main() {
	int i, n;
	int prime[500]; // �Ҽ��� �����ϴ� �迭
	int ptr = 0; // �̹� ���� �Ҽ��� ����
	unsigned long counter = 0; // �������������� ���� Ƚ��
	prime[ptr++] = 2; // 2�� �Ҽ��Դϴ�.
	prime[ptr++] = 3; // 3�� �Ҽ��Դϴ�.
	for (n = 5; n <= 1000; n += 2) { // Ȧ������ ������� ��
		int flag = 0; // �Ҽ� �Ǻ� flag
		for (i = 1; counter++, prime[i] * prime[i] <= n; i++) {
			counter++;
			if (n % prime[i] == 0) { // �����������. -> �Ҽ��� �ƴϴ�.
				flag = 1;
				break; // �� �̻� �ݺ��� ���� x
			}
		}if (!flag) // ���������� ����������� x
			prime[ptr++] = n; // �迭�� �ش��ϴ� �� ����
	}
	for (i = 0; i < ptr; i++)
		printf("%d\n", prime[i]);
	printf("������ �������� ������ Ƚ��: %lu\n", counter);

	return 0;
}