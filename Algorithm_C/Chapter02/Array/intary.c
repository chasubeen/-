#include<stdio.h>
# define N 5 /* �迭�� ��� ���� */

/* �ڷ����� int�̰� ����� ������ 5�� �迭 */
void main() {
	int i;
	int a[N]; /* �迭�� ���� */
	for (i = 0; i < N; i++) { /* �� ��ҿ� �� �Է� */
		printf("a[%d] : ", i);
		scanf("%d", &a[i]);
	}
	puts("�� ����� ��");
	for (i = 0; i < N; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}

	return 0;
}