/*
����
�� ���� �Ǽ��� �Է¹޾� ������ �������� ���ϰ� �� ������ ���̿� �����ϴ� ������ ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
��, �Է¹޴� �� �Ǽ��� ����̸� �� ������ ���̶�� ���� �� �������� �����Ѵ�.

�Է� ��
12.0 34.789

��� ��
2

Hint!
�� ���� �������� ���Ͽ� ������ ����ȯ�� �� �� �����غ���.
�� �� ������ ������ ��� ������ �Ǹ� ���� ���� ��� ��ȯ�ϱ� �� ������ �����ٰ� ���ٸ� ������ ������ ���Ѿ� �Ѵ�.
ū ���� ������ ������ �۰ų� �����Ƿ� ������ ������ �ȴ�.
*/

#include<stdio.h>
#include<math.h>

int square(float num1, float num2); // �Լ��� ����

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
		num1 = num2; // num1�� �׻� ���� ����!
		num2 = tmp;  // num2�� �׻� ū ����!
	} 
	
	num1 = sqrt(num1) > (int)sqrt(num1) ? ((int)sqrt(num1) + 1) : (int)sqrt(num1); 
	num2 = (int)sqrt(num2); 
	
	for (int i = num1; i <= num2; i++) 
		cnt++; 

	return cnt; 
}


