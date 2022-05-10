/*
문제
10 이하의 정수 n을 입력받은 후 n명의 이름(영문자 20자 이하)과 세 과목의 점수를 입력받아 총점이 높은 순으로 정렬하여 출력하는 프로그램을 작성하시오.
입력 예
3
Chung 50 65 89
Nolbu 100 38 99
Hungbu 85 95 77
출력 예
Hungbu 85 95 77 257
Nolbu 100 38 99 237
Chung 50 65 89 204
Hint!
이름과 3과목의 성적 이외에 총점까지 포함하는 구조체를 정의하면 편리하다.
*/

#include<stdio.h>

typedef struct Score {
	char name[20];
	int a, b, c;
	int sum;
}score;

void main() {
	int n;
	scanf("%d", &n);
	
	int i, j;
	score p[10];
	for(i=0;i<n;i++){
		scanf("%s %d %d %d", p[i].name, &p[i].a, &p[i].b, &p[i].c);
		p[i].sum = p[i].a + p[i].b + p[i].c;
	}
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (p[i].sum < p[j].sum) {
				score tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("%s %d %d %d %d\n", p[i].name, p[i].a, p[i].b, p[i].c, p[i].sum);
	}
}