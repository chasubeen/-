#include<stdio.h>

void main() {
// ���ڿ�: �� ����� �ڷ����� ������!
	char str1[] = "Hello"; //NULL ����(���ڿ��� ���� �ǹ��ϴ� ����)�� ���ԵǾ� ����!
	char str2[] = { 'h','e','l','l','o'};

	printf("sizeof(str1):%d\n", sizeof(str1));
	printf("sizeof(str2):%d\n", sizeof(str2));

}