/*
����
100 ������ �ڿ��� N�� �Է¹޾� ����Լ��� �̿��Ͽ� 1���� N������ ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
100
��� ��
5050
*/

#include<stdio.h>

int add(int n) {
	if (n == 1) {
		return n;
	}
	else {
		return n + add(n - 1);
	}
}
int main() {
	int N;
	scanf("%d", &N);
	printf("%d\n", add(N));
	return 0;
}