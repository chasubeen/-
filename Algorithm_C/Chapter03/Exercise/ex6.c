/* Q6 bsearch �Լ��� ����Ͽ� ������������ ���ĵ� �迭 �˻� */
#include <stdio.h>
#include <stdlib.h>

/*--- ������ ���ϴ� �Լ� (long�� ��������)---*/
int long_cmpr(const long *a, const long *b){
	if (*a < *b)
		return 1;
	else if (*a > *b)
		return -1;
	else
		return 0;
}

int main(void){
	int i, nx, ky;
	long *x;	
	long *p;	

	puts("bsearch �Լ��� ����Ͽ� �˻�");
	printf("����� ����: ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(long));	

	printf("������������ �Է��ϼ���.\n", nx);

	printf("x[0] : ");
	scanf("%ld", &x[0]);

	for (i = 1; i < nx; i++) {
		do {
			printf("x[%d] : ", i);
			scanf("%ld", &x[i]);
		} while (x[i] > x[i - 1]);	// �ٷ� ���� ������ ������ �ٽ� �Է�
	}

	printf("�˻� ��: ");
	scanf("%d", &ky);

	p = bsearch(&ky,					/* �˻� ���� ���� ������ */
		x,								/* �迭 */
		nx,								/* ��ڼ� */
		sizeof(long),					/* ����� ũ�� */
		(long(*)(const void *, const void *))long_cmpr	/* �� �Լ� */
	);

	if (p == NULL)
		puts("�˻��� �����߽��ϴ�.");
	else
		printf("%ld�� x[%d]�� �ֽ��ϴ�.\n", ky, (int)(p - x));

	free(x);	

	return 0;
}
