#include<stdio.h>

void main() {
	char * name[5] = {"�޸�", "CPU","�����","���κ���","�ϵ��ũ"};
	int code_number;
	printf("Code Number:");
	scanf("%d", &code_number);
	if ((code_number >= 0) && (code_number <= 4)) {
		printf("��ǰ��:%s\n", name[code_number]);
	}
	else {
		printf("��ǰ �ڵ� �Է� ����!");
	}
}