# include<stdio.h>
# define CHARGE 2000 // �ð� �� ���

void main() {
	int time, rate; // ������ time, ������ rate ���� ����
	printf("���ð��� �Է��ϼ���: "); // Ű����� �Է¹��� ���� time�� �����ض�!
	scanf("%d", &time); // time: 3 -> rate: 6000

	rate = time* CHARGE;
	printf("������� %d�� �Դϴ�\n", rate);


}