#include<stdio.h>
struct movie {
	char name[30];
	char actor[30];
};

void main() {
	struct movie kMovie = { "�Ű��Բ�","������" };
	printf("��ȭ����:%s\n", kMovie.name);
	printf("��ȭ���:%s\n", kMovie.actor);



}