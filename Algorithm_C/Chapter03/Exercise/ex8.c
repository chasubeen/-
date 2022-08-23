#include <stdio.h>
#include <stdlib.h>

/*--- base�� ����Ű�� ����� ũ�Ⱑ size�̰� ����� ������ nmemb�� �迭���� key�� ��ġ�ϴ� ��Ҹ�
	  �� �Լ� compar�� ����Ͽ� ���� �˻� ---*/
void* binsearch(const void* key, const void* base, size_t nmemb, size_t size,
	int(*compar)(const void*, const void*))
{
	int pl = 0; // �˻� ���� �� ���� �ε���
	int pr = nmemb - 1; // �˻� ���� �� ���� �ε���
	int pc; // �˻� ���� �Ѱ���� �ε���
	char* x = (char*)base;

	if (nmemb > 0) { // ����� ������ 1�� �̻��̶��
		while (1) {
			int comp = compar((const void*)&x[(pc = (pl + pr) / 2) * size], key);
			if (comp == 0) // �˻� ����(x[pc] == key)
				return &x[pc * size];
			else if (pl == pr) // ��Ұ� �������� ����(�յڰ� ������)
				break;
			else if (comp < 0)  // x[pc] < key
				pl = pc + 1; // �˻� ������ �Ĺݺη� ������
			else // x[pc] > key
				pr = pc - 1; // �˻� ������ ���ݺη� ������
		}
	}
	return NULL; // �˻� ���� 
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

void main(void){
	int i, nx, ky;
	int* x; // �迭�� ù ��° ��ҿ� ���� ������ 
	int* p; // �˻��� ��ҿ� ���� ������

	puts("binsearch �Լ��� ����Ͽ� �˻�");
	printf("��ڼ� : ");
	scanf("%d", &nx);
	x = (int*)calloc(nx, sizeof(int)); // ����� ���� nx�� int�� �迭�� ���� 

	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	printf("�˻� �� : ");
	scanf("%d", &ky);

	p = binsearch(&ky, // �˻� ���� ���� ������ 
		x, // �迭 
		nx, // ����� ���� 
		sizeof(int), // ����� ũ��
		(int(*)(const void*, const void*))int_cmp // �� �Լ�
	);

	if (p == NULL)
		puts("�˻��� �����߽��ϴ�.");
	else
		printf("%d�� x[%d]�� �ֽ��ϴ�.\n", ky, (int)(p - x));
	free(x); // �޸� ����
}
