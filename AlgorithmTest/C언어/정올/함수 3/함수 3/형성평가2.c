/*
����
�ڿ��� N�� �Է¹޾� N�� Ȧ���� ��쿡�� 1���� N������ Ȧ���� 
¦���� ���� 2���� N������ ¦���� ��� ����ϴ� ���α׷��� ����Լ��� �ۼ��Ͻÿ�.
�Է� ��
15
��� ��
1 3 5 7 9 11 13 15
*/

# include <stdio.h> 

int func(int n); // �Լ� ����

int main() { 
	int n; 
	scanf("%d",&n); 
	func(n); 
	
	return 0; 
} 

int func(int n) { 
	if(n<=0) 
		return 0; 
	
	if(n%2 == 0 ) {  // ¦��
		func(n-2); 
		printf("%d ",n); 
		return; 
	} 
	
	if(n%2!= 0 ) { // Ȧ��
		func(n-2); 
		printf("%d ",n); 
		return; 
	} 
}
