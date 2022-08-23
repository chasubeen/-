#include<stdio.h>
#include<stdlib.h>

/* �� �Լ�  compar�� ����Ͽ� ���� �˻� */
void* seqsearch(const void* key, const void* base, size_t nmemb, size_t size,
	int(*compar)(const void*, const void*))
{
	size_t i;
	char* x = (char*)base;
	for (i = 0; i < nmemb; i++) // ����� ������ŭ �� �۾� ����
		if (!compar((const void*)&x[i * size], key)) // �˻� ����� key�� ��ġ���� �ʴ´ٸ�
			return (&x[i * size]); // �˻��ϴ� ���(�迭) �߿� ��ġ�ϴ� ��ҿ� ���� �����͸� ��ȯ
	return NULL; //  �˻� ����(��ġ�ϴ� ��Ұ� ����)
}

/*--- ������ ���ϴ� �Լ� ---*/
int int_cmp(const int* a, const int* b) {
	if (*a < *b)
		return -1;
	else if (*a > *b)
		return 1;
	else
		return 0;
}

void main() {
	int i, nx, ky;
	int* x; // �迭�� ù ��° ��ҿ� ���� ������ 
	int* p; // �˻��� ��ҿ� ���� ������

	puts("seqsearch �Լ��� ����Ͽ� �˻�");
	printf("����� ���� : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int)); // ����� ������ nx�� int�� �迭�� ����

	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	printf("�˻� �� : ");
	scanf("%d", &ky);

	p = seqsearch(&ky, // �˻� ���� ���� ������
		x, // �迭
		nx, // ����� ����
		sizeof(int), // ����� ũ�� 
		(int(*)(const void*, const void*))int_cmp	 // �� �Լ� 
	);

	if (p == NULL)
		puts("�˻��� �����߽��ϴ�.");
	else
		printf("%d�� x[%d]�� �ֽ��ϴ�.\n", ky, (int)(p - x));

	free(x);
}
