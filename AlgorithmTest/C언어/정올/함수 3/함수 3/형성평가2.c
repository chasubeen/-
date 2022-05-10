/*
문제
자연수 N을 입력받아 N이 홀수인 경우에는 1부터 N까지의 홀수를 
짝수인 경우는 2부터 N까지의 짝수를 모두 출력하는 프로그램을 재귀함수로 작성하시오.
입력 예
15
출력 예
1 3 5 7 9 11 13 15
*/

# include <stdio.h> 

int func(int n); // 함수 선언

int main() { 
	int n; 
	scanf("%d",&n); 
	func(n); 
	
	return 0; 
} 

int func(int n) { 
	if(n<=0) 
		return 0; 
	
	if(n%2 == 0 ) {  // 짝수
		func(n-2); 
		printf("%d ",n); 
		return; 
	} 
	
	if(n%2!= 0 ) { // 홀수
		func(n-2); 
		printf("%d ",n); 
		return; 
	} 
}
