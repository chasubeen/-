/*
����
�л����� ������ �Է��� �޴ٰ� 0�� �ԷµǸ� �� ������ �Է¹��� ������ 10�� ������ �����Ͽ� �����뺰 �л� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
(1�� ���� ������ ������� �ʴ´�.)
�л��� �ִ� 100�������̴�.

�Է� ��
63 80 95 100 46 64 88 0
��� ��
100 : 1 person
90 : 1 person
80 : 2 person
60 : 2 person
40 : 1 person

Hint!
10���� ���� ���� �������� �迭�� ���� �� ����Ѵ�.
*/

#include<stdio.h>
#define SIZE 11

int main(void) {
	int n;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
		arr[i] = 0;
	while (1) {
		scanf("%d", &n);
		for (int i = 0; i < SIZE; i++) {
			if (n / 10 == i)
				arr[i]++;
		}
		if (n == 0) {
			arr[0]--;
			break;
		}
	}
	for (int i = SIZE-1; i>=0; i--) {
		if (arr[i] != 0)
			printf("%d : %d person\n", i * 10, arr[i]);
	}
	return 0;
}