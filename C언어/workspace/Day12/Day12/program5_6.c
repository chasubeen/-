#include<stdio.h>

void main() {
	int a = 0;
	do {
		++a;
		printf("do~while���� %d�� �ݺ��Ǿ����ϴ�.\n", a); // do~while���� ��� 1���� ����ȴ�.
		                                                // do�� ���� -> ���� -> while������ ��
	} 
	while (a < 10);
}