#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/*--- type ���� x�� y�� ���� ��ȯ ---*/
#define swap(type, x, y) do {type t = x; x = y; y = t;} while (0)

/*--- ����� ������ n�� �迭 a�� ��� ����� ������ ���� ---*/
void shuffle(int a[], int n){
	int i;
	srand(time(NULL));
	for (i = n - 1; i> 0; i--) { // �迭 a�� shuffle
		int j = rand() % (i + 1);
		if (i != j)
			swap(int, a[i], a[j]);
	}
}

void main(){
	int i;
	int* x;  // �迭�� ù ��° ��ҿ� ���� ������
	int nx;  // �迭 x�� ����� ����

	printf("����� ���� : ");
	scanf("%d", &nx);
	x = (int*)calloc(nx, sizeof(int)); // ����� ������ nx�� int�� �迭 x�� ���� 

	printf("%d ���� ������ �Է��ϼ���.\n", nx);
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	shuffle(x, nx); // �迭 x�� ��� ������ ����

	printf("�迭 ����� ������ �����߽��ϴ�.\n");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x); // �迭 x�� ����
}