#include<stdio.h>
#include<math.h> //pow(�ؼ�,����) -> ������ ���

// ��������� ���� �ϳ��� �Է¹޾�, �Է¹��� �������� ������ ����ϱ�
int main() {
	int num = 0;
	printf("���� �Է�:");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		printf("i:%d\n", (int)pow(i, (double)2));
	}
	return 0;
}