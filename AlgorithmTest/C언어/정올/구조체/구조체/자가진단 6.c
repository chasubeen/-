/*
����
5���� �̸��� Ű, �����Ը� �Է¹޾� �̸������� �����Ͽ� ����ϰ�,
�����԰� ���ſ� ������ �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�����Դ� �Ҽ������� 1�ڸ����� ����Ѵ�.
�Է� ��
Lee 150 35.6
Kim 155 28.9
Sin 148 32.7
Jung 160 41.2
Park 165 38.7

��� ��
name
Jung 160 41.2
Kim 155 28.9
Lee 150 35.6
Park 165 38.7
Sin 148 32.7

weight
Jung 160 41.2
Park 165 38.7
Lee 150 35.6
Sin 148 32.7
Kim 155 28.9
*/

#include<stdio.h>
#include<string.h>

typedef struct Person {
	char name[20];
	int height;
	float weight;
}person;

void main() {
	person tmp; //�ӽ� ���� �����س���
	person per[5]; //����ü �迭 ����
	int i, j;
	
	//���� �Է¹ޱ�
	for (i = 0; i < 5; i++) {
		scanf("%s %d %f", per[i].name, &per[i].height, &per[i].weight);
	}
	// �̸� �����ϱ�(strcmp�̿��ϱ�)
	for (i = 0; i < 5; i++) {
		for (j = i; j < 5; j++) {
			if (strcmp(per[i].name, per[j].name) > 0) { //���ڿ�1�� ���ڿ�2���� �켱����
				tmp = per[i];
				per[i] = per[j];
				per[j] = tmp;
			}
		}
	}
	printf("name\n");
	for (i = 0; i < 5; i++) {
		printf("%s %d %.1f\n", per[i].name, per[i].height, per[i].weight);
	}

	//������ �����ϱ�
	for (i = 0; i < 5; i++) {
		for (j = i; j < 5; j++) {
			if (per[i].weight < per[j].weight) {
				tmp = per[i];
				per[i] = per[j];
				per[j] = tmp;
			}
		}
	}
	printf("\nweight\n");
	for (i = 0; i < 5; i++) {
		printf("%s %d %.1f\n", per[i].name, per[i].height, per[i].weight);
	}
}