//���ڿ� �����ϱ�
#include<stdio.h>
#include<string.h>
void main() {
	char country[10] = "Korea";
	char nation[10];

	// nation�� country �� ����
	strcpy(nation, country);
	printf("country: %s, nation: %s\n",country,nation);
}
