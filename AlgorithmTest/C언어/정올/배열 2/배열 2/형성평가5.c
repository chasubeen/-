/*
����
ȣ���̳� �б��� 6�г��� �� ���� �ִµ� �� ���� ��ǥ�� �� �� �����Ͽ� �������� ������ �Ͽ���.
�ݺ��� �� ���� ���⸦ �� ������ �Է¹޾� �� �ݺ��� ���⸦ �� ������ �հ踦 ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
(�ݵ�� �迭�� �̿��ϰ� �Է��Ŀ� ����ϴ� ������� �ϼ���.)
�Է� ��
1class? 15 2 35
2class? 33 1 6
3class? 5 10 19
4class? 1 8 55
��� ��
1class : 52
2class : 40
3class : 34
4class : 64
*/

#include<stdio.h>

int main(void) {
	int arr[4][3];
	int sum[4];
	for (int i = 0; i < 4; i++) {
		printf("%dclass? ", i + 1);
		scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
		sum[i] = (arr[i][0] + arr[i][1] + arr[i][2]);
	}

	for (int i = 0; i < 4; i++) {
		printf("%dclass : %d\n", i + 1, sum[i]);
	}

	return 0;
}