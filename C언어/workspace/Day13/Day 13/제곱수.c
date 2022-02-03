#include<stdio.h>
#include<math.h> //pow(밑수,지수) -> 제곱수 출력

// 사용자한테 숫자 하나를 입력받아, 입력받은 수까지의 제곱을 출력하기
int main() {
	int num = 0;
	printf("숫자 입력:");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		printf("i:%d\n", (int)pow(i, (double)2));
	}
	return 0;
}