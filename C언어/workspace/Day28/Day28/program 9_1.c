#include<stdio.h>
#include<string.h>
void tel_find(char *);
	void main() {
		char name[100];
		int a;
		printf("�˻��� �̸�:");
		scanf("%s", &name);
		tel_find(name);
	}
	void tel_find(char * find_name) {
		char *name[10] = {"ȫ����","�ֹ���","�ο���"}; // ������ ������ �迭
		char *tel[10] = {"2222-1123","1004-1004","9999-1234"};
		int i;
		for (i = 0; i < 3; i++) {
			if (!strcmp(name[i], find_name)) { //strcmp: ���ڿ� ��(string compare)
				                               // �� ���ڰ� ���� �� ������ ���ǹ�
				printf("%s�� ��ȭ��ȣ�� %s�Դϴ�.\n", name[i], tel[i]);
				return;  //���α׷� ����
			}
		}
		printf("����ó�� �����ϴ�.\n"); //���α׷� ������ �� �����ڵ� ����ϰ� ����
	}



