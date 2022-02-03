#include<stdio.h>

void main() {
	int *pi = 1000;
	float *pf = 1000; //1000번지부터 4byte만큼 1000번지에 해당하는 값이라고 간주함
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