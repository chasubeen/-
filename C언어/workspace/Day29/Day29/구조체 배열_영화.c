#include<stdio.h>

struct movie {
	char name[30];
	char actor[30];
};
void main() {
	struct movie movies[3];
	for (int i = 0; i < 3; i++) {
		printf("%d번째 영화 제목:", i + 1);
		scanf("%s", movies[i].name);
		printf("%d번째 영화 배우:", i + 1);
		scanf("%s", movies[i].actor);
}

	printf("-------------Movies---------------\n");
	for (int i = 0; i < 3; i++) {
		printf("%d번쨰 영화 제목:%s\n", i + 1,movies[i].name);
		printf("%d번째 영화 배우:%s\n", i + 1, movies[i].actor);
	}
}