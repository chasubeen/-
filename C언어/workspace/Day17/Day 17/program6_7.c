#include<stdio.h>

void static_vtest(); //�Լ��� ����
void main() {
	static_vtest(); // s_sum = 10
	static_vtest(); // s_sum = 20
	static_vtest(); // s_sum = 30
}

//������
void static_vtest() {
	int sum = 0; //��������(�Լ��� �����ֱ�: �Լ��� ����~����)
	static int s_sum = 0; //���� ����(�Լ��� �����ֱ�: ���α׷��� ����~����)
	sum = sum + 10;
	s_sum = s_sum + 10;
	printf("sum:%d,s_sum:%d\n", sum, s_sum);

}