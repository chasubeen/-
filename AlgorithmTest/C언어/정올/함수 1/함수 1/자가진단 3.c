/*
����
100 �̸��� ������ �Էµȴ�. ���� n�� �Է¹޾� n x n ũ���� ���ڻ簢���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�̶� ���� n�� ���޹޾� ���� ���簢���� ����ϴ� �Լ��� �ۼ��ϰ�, �Է¹��� ���� n�� �Լ��� �����Ͽ� ����Ѵ�.
�Է� ��
4
��� ��
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
*/

#include<stdio.h>

int n;
void square() {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = n * i + 1; j <= n * i + n; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}
}

void main() {
	scanf("%d", &n);
	square();
}

/*
�ַ��
#include <stdio.h>

// �Լ� ������
void print(int a) 
{
int tmp=1;
int i, j;
for(i=0;i<a;i++){
for(j=0;j<a;j++){
printf("%d ",tmp++); //���� ������Ű��
}
printf("\n"); // �� ����
}
}

int main()
{
int a;
scanf("%d", &a);

print(a);
}
*/