/*
����
�� ���� �ܾ �Է¹޾� �ƽ�Ű�ڵ�(����) ������ ���� ���� ������ �ܾ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�� �ܾ��� ���̴� 1�̻� 20 �����̴�.
�Է� ��
cat dog cow
��� ��
cat
*/

#include<stdio.h>

void main() {
	char a[20], b[20], c[20];
	scanf("%s %s %s", a, b, c);

	char tmp[20];

	strcpy(tmp, (strcmp(a, b) < 0 ? a : b));
	printf("%s\n", strcmp(tmp, c) < 0 ? tmp : c);
}