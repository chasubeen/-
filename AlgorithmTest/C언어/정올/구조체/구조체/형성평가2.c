/*
����
�̸��� ��ȭ��ȣ, �ּҸ� ������ϴ� ����ü�� �����ϰ� 3���� �ڷḦ �Է¹��� �� ���������� �̸��� ���� ���� ����� �ڷḦ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�̸�, ��ȭ��ȣ, �ּҴ� ��� 15�� �����̴�.
�Է� ��
Lim 1234-5678 Seoul
Hong 2345-6789 Gangwon
Sung 3456-7890 Gyeonggi
��� ��
name : Hong
tel : 2345-6789
addr : Gangwon
*/

#include<stdio.h>
#include<string.h>

typedef struct {
	char name[15];
	char tel[15];
	char addr[15];
}data;

void main() {
	data p[3];
	int i, j;
	char fast[50] = "zz";

	for (i = 0; i < 3; i++) {
		scanf("%s %s %s", p[i].name, p[i].tel, p[i].addr);
		if (strcmp(p[i].name, fast) < 0) {
			strcpy(fast, p[i].name);
			j = i;
		}
	}
	printf("name : %s\n", p[j].name);
	printf("tel : %s\n", p[j].tel);
	printf("addr : %s\n", p[j].addr);

}