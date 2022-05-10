/*
문제
승지는 주사위 놀이를 하다가 주사위를 10번 던져서 각 숫자가 몇 번씩 나왔는지 알아보려고 한다. 
한번 던질 때마다 나온 주사위의 숫자를 입력받아서 각 숫자가 몇 번씩 나왔는지 출력하는 프로그램을 작성하시오.
입력 예
5 6 3 4 5 5 2 2 4 6
출력 예
1 : 0
2 : 2
3 : 1
4 : 2
5 : 3
6 : 2
*/

#include<stdio.h>

int main(void) {
	int n;
	int dice[6];
	for (int i = 0; i < 6; i++)
		dice[i] = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &n);
		for (int j = 0; j < 6; j++) {
			if (j+1 == n)
				dice[j]++;
		}
	}
	for (int i = 0; i < 6; i++) {
		printf("%d : %d\n", i + 1, dice[i]);
	}

	return 0;
}