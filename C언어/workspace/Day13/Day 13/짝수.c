#include<stdio.h>
//for���� ����ؼ� �����ϱ�
// ����ڿ��� ���ڸ� �Է¹޾�, �Է¹��� ���ڸ�ŭ�� ¦���� 1���� ����ϱ�
int main() {
	int num;
	printf("���ڸ� �Է��ϼ���:");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		if (i % 2 == 0) {
			printf("%d\n", i);
		}
	}



	return 0;

}