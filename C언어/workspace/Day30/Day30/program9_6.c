#include<stdio.h>
#include<stdlib.h>

struct Data {
	int num;
	char name[25];
};
void main() {
	struct Data *data;
	int count = 0,i;
	data = (struct Data *)malloc(sizeof(struct Data) * 10); //�ϳ��� ����ü ������ �Ҵ���� �� �ִ� ������ 10�� �Ҵ������!

	//��ȣ �Է�
	printf("��ȣ:");
	scanf("%d", &data->num); //&data -> num : �����Ͱ� ����Ű�� �ִ� num�� �ּҸ� �Է¹�����!

	//��ȣ�� 0�� �Ǳ� ������ �ݺ�
	while (data->num != 0) {
		printf("�̸�:");
		scanf("%s", (data++)->name); //data�� �̸��� �ְ� data�� 1 �������Ѷ�!
		printf("��ȣ:");
		scanf("%d", &data->num);
		count++; //count: �Է��� Ƚ��
	}
	printf("\n\n");
	for (i = count; i > 0; i--) {
		printf("%d.%s\n", (data - i)->num, (data - i)->name);
	}

	return 0;
}