#include<stdio.h>

struct movie {
	char name[30];
	char actor[30];
};
void main() {
	struct movie movies[3];
	for (int i = 0; i < 3; i++) {
		printf("%d��° ��ȭ ����:", i + 1);
		scanf("%s", movies[i].name);
		printf("%d��° ��ȭ ���:", i + 1);
		scanf("%s", movies[i].actor);
}

	printf("-------------Movies---------------\n");
	for (int i = 0; i < 3; i++) {
		printf("%d���� ��ȭ ����:%s\n", i + 1,movies[i].name);
		printf("%d��° ��ȭ ���:%s\n", i + 1, movies[i].actor);
	}
}