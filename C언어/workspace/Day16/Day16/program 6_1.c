#include<stdio.h>

// �Լ��� ������Ÿ��(����) <- �Լ��� ������ ������
int avg(int i, int j); // �Լ� ���� �� main ����!(for �Լ��� ȣ��)

void main() {
	int a, b, c;
	printf("ù ��° ��:");
	scanf("%d", &a);
	printf("�� ��° ��:");
	scanf("%d", &b);

	c = avg(a, b); 
	printf("%d�� %d�� ��հ��� %d�Դϴ�.\n", a, b, c);
}
// �Լ��� ������
int avg(int i, int j) {  //avg ȣ��
	int k;
	k = (i + j) / 2;
	return k;
}