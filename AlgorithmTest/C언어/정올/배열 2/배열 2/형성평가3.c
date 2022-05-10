/*
문제
10 미만의 자연수 두 개를 입력받아서
첫 번째 항과 두 번째 항을 입력받은 수로 초기화 시킨 후
세 번째 항부터는 전전항과 전항의 합을 구하여
그 합의 1의 자리로 채워서 차례로 10개를 출력하는 프로그램을 작성하시오.
입력 예
3 5
출력 예
3 5 8 3 1 4 5 9 4 3
*/

#include<stdio.h>

int main(void) {
	int arr[10];
	int a, b;
	scanf("%d %d", &a, &b);

	arr[0] = a, arr[1] = b;
	for (int i = 2; i < 10; i++)
		arr[i] = (arr[i - 2] + arr[i - 1]) % 10;

	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	return 0;
}
