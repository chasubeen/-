/*
- ����
�� ���� ������ ���޹޾� �ִ밪�� ���Ͽ� �����ϴ� �Լ��� �ۼ��ϰ�,
�� ������ �Է¹޾� �ִ밪�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
- �Է� ��
-10 115 33
- ��� ��
115
*/

#include<stdio.h>

// �Լ� ������
int max(int a, int b, int c) {

	int max = 0;
	if (a > b && a > c) {
		max = a;
	}
	else if (b > a && b > c) {
		max = b;
	}
	else {
		max = c;
	}
	return max;
}

void main() {

	int n1, n2, n3;
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("%d\n", max(n1,n2,n3)); 
	return 0;
}