#include<stdio.h>

//������ ���� ����
enum COMPUTER{MONITOR,RAM,HDD,DVD};
// �Լ� ����
void parts(int);

void main() {

	int code;
	printf("�ڵ��Է�:");
	scanf("%d", &code);
	parts(code);
}

void parts(int code) {
	enum COMPUTER com_code;
	com_code = code;
	switch (com_code) {
	case MONITOR:
		printf("Monitor-�����\n");
		printf("������ inch\n");
		printf("��Ÿ: �ػ�, ���ļ� ���� ����� ��\n");
		break;
	case RAM:
		printf("RAM-��\n");
		printf("������ Mega Byte\n");
		printf("��Ÿ:DDR RAM�� �ӵ��� ����� ��\n");
		break;
	case HDD:
		printf("HDD-�ϵ��ũ\n");
		printf("������ Tera Byte\n");
		printf("��Ÿ: �ӵ��� ��Ÿ���� RPM�� Ȯ���� ��\n");
		break;
	case DVD:
		printf("DVD ROM- CD ��\n");
		printf("������ ���\n");
		printf("DVD R\W�� DVD R�� ����\n");
		break;
	default:
		printf("input error\n");
	}
}