/*
����
33���� 127 ������ ���ڸ� ��� �Է¹޾� �Է¹��� ������ �ƽ�Ű�ڵ忡 �ش��ϴ� ���ڸ� ����ϴٰ� 
������ ����� �Է��� ������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�ԡ���� ��
ASCII code =? 66
B
ASCII code =? 122
z
ASCII code =? 0
Hint!
���ڿ� ���� Lecture
*/

#include<stdio.h>

void main() {
	int num;
	while (1) {
		printf("ASCII code =? ");
		scanf("%d", &num);
		if (num < 33 || num>127) {
			break;
		}
		printf("%c\n",num);
	}
}