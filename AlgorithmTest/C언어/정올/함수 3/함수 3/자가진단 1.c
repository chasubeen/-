/*
����
20 ������ �ڿ��� N�� �Է¹޾� ����Լ�(�ڱ��ڽ��� ��� �ݺ��ϴ� �Լ�)�� �̿��ؼ� 
���ڿ� ��recursive���� N�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� ��
3
��� ��
recursive
recursive
recursive
*/

#include<stdio.h>

//����Լ� ����
void func(int n) {
	if (n > 1) {
		func(n-1); //�ڱ��ڽ��� n-1���� ��� �ݺ�(��������� n�� ����)
	}
	printf("recursive\n");
}

void main() {
	int n;
	scanf("%d", &n);
	func(n);

	return 0; //�����ڵ� �ۼ� x -> ���ѷ��� ����!
}

