/* ���ڿ��� ���̸� ���ϴ� ���α׷� */
#include<stdio.h>

/* --- ���ڿ� s�� ���̸� ���ϴ� �Լ�(����1) --- */
int str_len(const char* s) {
	int len = 0;

	while (s[len])
		len++;
	return len;
}

void main() {
	char str[256];
	printf("���ڿ�: ");
	scanf("%s", str);
	printf("�� ���ڿ��� ���̴� %d�Դϴ�.\n", str_len(str));
}