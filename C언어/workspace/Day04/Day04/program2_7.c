#include<stdio.h>

void main() {
	const float PI = 3.14; // const(constant) : ���/ float: �Ǽ��� ����
                           // PI: �ɺ������ -> ���̻� �� ���� x
	float pi = 3.14; // pi: �Ǽ��� ����  -> ���� o
	int radius; // int: 4 byte ������
	// PI = 3.14; <- ����̹Ƿ� ������ �� ����
	pi = 3.14; 

	scanf("%d", &radius); // scanf: ������ �Է��ϴ� Ű����<- Ű���� �Է°�
	printf("%d*3.14 = %f\n", radius, radius*PI); 


}