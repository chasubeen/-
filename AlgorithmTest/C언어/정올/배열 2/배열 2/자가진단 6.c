/*
문제
5명 학생의 국어 영어 수학 과학 4과목의 점수를 입력 받아서 
각 개인별로 평균이 80 이상이면“합격” 그렇지 않으면“불합격”을 출력하고 합격한 사람의 수를 출력하는 프로그램을 작성하시오.
입력 예
85 67 95 65
80 95 86 56
100 98 67 86
95 76 84 65
67 86 90 76
출력 예
fail
fail
pass
pass
fail
Successful : 2
*/

#include<stdio.h>

void main() {
	int score[5][4];
	int sum[5] = {0};
	int tmp = 0;
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &score[i][j]);
			sum[i] += score[i][j];
		}
	}

	for (i = 0; i < 5; i++) {
			if (sum[i] >= 320) {
				printf("pass\n");
				tmp++;
			}
			else {
				printf("fail\n");
			}
		}
		printf("Successful : %d", tmp);
	}