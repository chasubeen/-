#include<stdio.h>

void main() {
	char str[31]; // ���� 31���� ������ �� �ִ� ���ڿ� str ����
	printf("�Է�:");
	//scanf("%s", str); // ���ڿ��� �Է¹޾� ������ �� �ּҰ� �ʿ����(<- & �Է� �ʿ� x)
	//scanf: ����o -> �Է��� �����ٰ� ������
	gets(str);
	puts(str);
}