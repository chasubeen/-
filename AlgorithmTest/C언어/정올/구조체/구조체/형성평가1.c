/*
����
�̸��� ��ȭ��ȣ, �ּҸ� ������ϴ� ����ü�� �����Ͽ� 1���� �ڷḦ �Է¹ް� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
������ ���̴� 100�� ���ϴ�.
�Է� ��
Lim 1234-5678 Seoul
��� ��
name : Lim
tel : 1234-5678
addr : Seoul
Hint!
��ȭ��ȣ�� ���ڿ��� ó���ϴ� ���� ���ϰ� �Ϲ����̴�.
*/

#include<stdio.h>

	struct Member{
		char name[100];
		char tel[100];
		char addr[100];
	};

	void main() {
		struct Member p;
		scanf("%s %s %s", p.name, p.tel, p.addr);
		printf("name : %s\n", p.name);
		printf("tel : %s\n",p.tel);
		printf("addr : %s\n", p.addr);
	}