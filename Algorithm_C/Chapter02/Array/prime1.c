#include<stdio.h>

// 1000 ������ �Ҽ� �����ϱ�

void main() {
	int i, n;
	unsigned long counter = 0; // �������� ������ Ƚ��
	for (n = 2; n <= 1000; n++) {
		for (i = 2; i < n; i++) {
			counter++;
			if (n % i == 0) // ������ �������� -> �Ҽ��� �ƴϴ�.
				break; // �� �̻� �ݺ��� �������� �ʰ� �����.
		}
		if (n == i) // ���������� ����������� �ʴ´�. -> �Ҽ��̴�.
			printf("%d\n", n);
	}
	return 0;
}