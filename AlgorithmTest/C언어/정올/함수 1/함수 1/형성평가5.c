/*
문제
3명 학생의 3과목 점수를 입력받아 각 과목별 학생별 총점을 출력하는 구조화된 프로그램을 작성하시오.
입력 예
50 80 100
96 88 66
100 85 90
출력 예
50 80 100 230
96 88 66 250
100 85 90 275
246 253 256 755
*/

# include <stdio.h>  

int sum(int a, int b, int c) {
	return a + b + c;
}

int main() { 
	int num[4][4] = {0,}; 
	int i,j; 
	for(i = 0; i<3; i++) { 
		for(j = 0; j<3; j++) { 
			scanf(" %d",&num[i][j]); 
		} 
	} 
	
	for(i = 0; i<4; i++) { 
		num[i][3] = sum(num[i][0], num[i][1],num[i][2]); 
	} 
	
	for(i = 0; i < 4; i++) { 
		num[3][i] = sum(num[0][i],num[1][i],num[2][i]); 
	} 
	
	for(i = 0; i < 4; i++) { 
		for(j = 0; j<4; j++) { 
			printf("%d ",num[i][j]); 
		} 
		printf("\n"); 
	} 
	return 0; 
} 



