/*
����
�ڿ��� N�� �Է¹޾� ����Լ��� �̿��Ͽ� N���� 1���� ���ʴ�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
N�� 50������ �ڿ����̴�.
�Է� ��
5
��� ��
5 4 3 2 1
*/

#include<stdio.h>


void func(int n) {
	if (n > 0) {
		printf("%d ", n);
		func(n - 1);
	}
	else {
		return;
	}
}
void main() {
	int n;
	scanf("%d", &n);
	func(n);

	return 0;
	printf("\n");
}