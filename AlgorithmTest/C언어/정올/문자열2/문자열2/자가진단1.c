/*
����
5���� �ܾ �Է¹޾� ��� �ܾ �Է¹��� �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�� �ܾ��� ���̴� 30�����̴�.
�Է� ��
dog
cat
chick
calf
goat
��� ��
goat
calf
chick
cat
dog
*/

#include<stdio.h>

void main() {
	char a[5][30];
	for (int i = 0; i < 5; i++) {
		scanf("%s", a[i]);
	}
	for (int i = 4; i >= 0; i--) {
		printf("%s\n", a[i]);
	}
}