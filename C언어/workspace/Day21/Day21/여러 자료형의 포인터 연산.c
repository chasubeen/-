#include<stdio.h>

void main() {
	int *pi = 1000;
	float *pf = 1000; //1000�������� 4byte��ŭ 1000������ �ش��ϴ� ���̶�� ������
	double *pd = 1000;
	char *pc = 1000;
	pi++;
	pf++;
	pd++;
	pc++;
	printf("pi:%d\n", pi);
	printf("pf:%d\n", pf);
	printf("pd:%d\n", pd);
	printf("ipc:%d\n", pc);

}