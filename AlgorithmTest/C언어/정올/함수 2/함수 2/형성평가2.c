/*
문제
두 개의 실수를 입력받아 각각의 제곱근을 구하고 두 제곱근 사이에 존재하는 정수의 개수를 출력하는 프로그램을 작성하시오.
단, 입력받는 두 실수는 양수이며 두 제곱근 사이라는 말은 두 제곱근을 포함한다.

입력 예
12.0 34.789

출력 예
2

Hint!
두 수의 제곱근을 구하여 정수로 형변환을 한 후 생각해보자.
두 수 사이의 수들은 모두 포함이 되면 작은 수의 경우 변환하기 전 원래의 제곱근과 같다면 개수에 포함을 시켜야 한다.
큰 수는 원래의 수보다 작거나 같으므로 무조건 포함이 된다.
*/

#include<stdio.h>
#include<math.h>

int square(float num1, float num2); // 함수의 선언

int main() { 
	float num1, num2; 
	scanf("%f %f", &num1, &num2); 
	printf("%d\n", square(num1, num2)); 
	
	return 0; 
} 

int square(float num1, float num2) { 
	float tmp; 
	int cnt = 0; 
	int i; 
	
	if (num1 > num2) { 
		tmp = num1; 
		num1 = num2; // num1을 항상 작은 수로!
		num2 = tmp;  // num2를 항상 큰 수로!
	} 
	
	num1 = sqrt(num1) > (int)sqrt(num1) ? ((int)sqrt(num1) + 1) : (int)sqrt(num1); 
	num2 = (int)sqrt(num2); 
	
	for (int i = num1; i <= num2; i++) 
		cnt++; 

	return cnt; 
}


