#include<stdio.h>

void main() {
	int sign; // �Է¹��� ��ȣ�� ������ ����
	printf("��ȣ�� ���α׷�\n");
	printf("��ȣ�� �Է��Ͻÿ�.(�������� 1, �ʷϺ��� 2):");
	scanf("%d", &sign);

	if (sign== 1) {
		printf("����\n");
	}
	else if (sign == 2) {
		printf("���\n");
	}
	else {  // else�� �ٷ� ���� ���� ���ǽĸ��� �����Ѵ�.
		printf("�߸��Է��ϼ̽��ϴ�.\n");
	}
}