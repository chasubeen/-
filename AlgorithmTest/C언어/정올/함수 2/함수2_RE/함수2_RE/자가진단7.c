/*
����
main() �Լ� ������ ���ڸ� ������� ���� ��, #define �� �̿��Ͽ� 1, 2, 3 �� ���� ���ڸ� �����Ͽ� 
������ �� ��� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
��¿��� ���� ����Ͻÿ�.
��� ��
1 + 1 = 2
1 + 2 = 3
1 + 3 = 4
2 + 1 = 3
2 + 2 = 4
2 + 3 = 5
3 + 1 = 4
3 + 2 = 5
3 + 3 = 6
Hint!
#define one 1....
*/

#define one 1
#define two 2
#define three 3

#include<stdio.h>
void main() {
	printf("%d + %d = %d\n", one, one, one + one);
	printf("%d + %d = %d\n", one, two, one + two);
	printf("%d + %d = %d\n", one, three, one + three);
	printf("%d + %d = %d\n", two, one, two + one);
	printf("%d + %d = %d\n", two, two, two + two);
	printf("%d + %d = %d\n", two, three, two + three);
	printf("%d + %d = %d\n", three, one, three + one);
	printf("%d + %d = %d\n", three, two, three + two);
	printf("%d + %d = %d\n", three, three, three + three);
}
