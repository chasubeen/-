#include<stdio.h>
#include<stdlib.h>

struct Data {
	int num;
	char name[25];
};
void main() {
	struct Data *data;
	int count = 0,i;
	data = (struct Data *)malloc(sizeof(struct Data) * 10); //하나의 구조체 변수를 할당받을 수 있는 공간을 10개 할당받을래!

	//번호 입력
	printf("번호:");
	scanf("%d", &data->num); //&data -> num : 데이터가 가르키고 있는 num의 주소를 입력받을게!

	//번호가 0이 되기 전까지 반복
	while (data->num != 0) {
		printf("이름:");
		scanf("%s", (data++)->name); //data를 이름에 넣고 data를 1 증가시켜라!
		printf("번호:");
		scanf("%d", &data->num);
		count++; //count: 입력한 횟수
	}
	printf("\n\n");
	for (i = count; i > 0; i--) {
		printf("%d.%s\n", (data - i)->num, (data - i)->name);
	}

	return 0;
}