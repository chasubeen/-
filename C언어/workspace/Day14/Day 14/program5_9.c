#include<stdio.h>

void main() {
	int sum = 0,i;
	for (i = 1; i <= 100; i++) {
		if (i % 2 == 0){
			continue; // ¦���� ���� ���� �ڵ尡 ������� �ʰ� �Է°��� ���õȴ�.
		}
		sum = sum + i;
		printf("%d������ Ȧ���� ���� %d�Դϴ�.\n", i, sum);
	}
	printf("Ȧ���� ���� %d�Դϴ�.\n", sum);
}