/*
����
�ڿ��� N�� �Է¹޾� 1���� N���� ����� �ϵ� n-1��° ���� n��° ���� 2�� ���� ���� �ǵ��� �ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
100
��� ��
1 3 6 12 25 50 100
Hint!
n/2�� ȣ���� �Ŀ� n�� ����ϵ��� �ϴ� ����Լ��� �ۼ��Ѵ�.
*/

#include<stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	func(n);
}

int func(int n) {
	if (n < 1) {
		return 0;
	}
	func(n / 2);
	printf("%d ", n);

	return;
}