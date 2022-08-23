#include<stdio.h>
#include<stdlib.h>

// ����� ������ n�� �迭 a���� key�� ��ġ�ϴ� ��Ҹ� ���� �˻�_ ���ʹ�

int search(int a[], int n, int key) {
	int i;
	a[n] = key;
	for(i = 0;i<n;i++){
		if (a[i] == key)
			break;
	}
	return i == n ? -1 : i;
}

void main() {
	int i, nx, ky, idx;
	int* x; // �迭�� ù ��° ��ҿ� ���� �ּҰ��� ������ ����
	puts("���� �˻�(���ʹ�)");
	printf("��� ����: ");
	scanf("%d", &nx);
	x = (int*)calloc(nx + 1, sizeof(int)); // ����� ������ (nx + 1)�� int�� �迭 ���� -> �ʱ�ȭ
	for (i = 0; i < nx; i++) { // ����> ���� �о���� ���� nx���̴�.
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	printf("�˻� ��: ");
	scanf("%d", &ky);
	idx = search(x, nx, ky); // �迭 x�� ���� ky�� ��Ҹ� ���� �˻�
	if (idx == -1)
		puts("�˻��� �����߽��ϴ�.");
	else
		printf("%d(��)�� x[%d]�� �ֽ��ϴ�.\n", ky, idx);
	free(x);
}