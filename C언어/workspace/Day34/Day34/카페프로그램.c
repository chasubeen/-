#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// 카페의 여러가지 기능 구현
void menuPrint();
void order(); //주문
void cancel(); // 취소
void pay(); //결제

char *menulist[5]; // 현재 주문내역(어떤걸 주문하였는가!)
int orderIdx = 0; //주문한 횟수(index)를 일단 0으로 지정
int total = 0; // 전체 주문액 -> 일단 0으로 저장

//기능 출력
void main() {
	int sc; //기능의 몇 번째 단계 시행중인가
	while (1) {
		printf("***************Cafe*********************\n");

		if (orderIdx > 0) {
			printf("현재 주문 내역: ");
			for (int i = 0; i < orderIdx; i++) {
				printf("%s ", menulist[i]);
			}
			printf("\n현재 결제금액: %d원\n", total);
		}

		printf("1. 주문하기\n");
		printf("2. 취소하기\n");
		printf("3. 결제하기\n");
		printf("4. 끝내기\n");
		printf("입력:");
		scanf("%d", &sc);
		if (sc == 1) { order(); }
		else if (sc == 2) { cancel(); }
		else if (sc == 3) { pay(); }
		else if (sc == 4) {
			printf("프로그램을 종료합니다\n");
			break;
		}
		else {
			printf("잘못입력하셨습니다.\n");
		}
	}
}
// 메뉴 출력
void menuPrint() {
	printf("1.Americano\n");
	printf("2.Espresso\n");
	printf("3.CafeLatte\n");

	return 0;
}

// 주문하기
void order() {
	int sc; //주문할 메뉴번호 입력변수
	char *orderMenu = { "" };
	orderMenu = (char*)malloc(sizeof(char) * 20);
	int price = 0;
	menuPrint();
	printf("주문할 메뉴번호를 입력하세요: ");
	scanf("%d", &sc);
	switch (sc) {
	case 1:
		orderMenu = "Americano";
		price = 3800;
		break;
	case 2:
		orderMenu = "Espresso";
		price = 2800;
		break;
	case 3:
		orderMenu = "Cafelatte";
		price = 4300;
		break;
	}
	menulist[orderIdx++] = orderMenu;
	total += price;
}

//취소하기
void cancel() {
	int delIdx; //삭제할 메뉴 번호 입력변수
	int price;
	if (orderIdx > 0) {
		printf("현재 주문 내역\n");
		for (int i = 0; i < orderIdx; i++) {
			printf("%d.%s\n", i + 1, menulist[i]);
		}
		printf("삭제할 메뉴 번호:\n");
		scanf("%d", &delIdx);
		char *deleteMenu = menulist[delIdx - 1];
		printf("delete menu:%s\n", deleteMenu);

		if (strcmp(deleteMenu, "Americano") == 0) {
			price = 3800;
		}
		else if (strcmp(deleteMenu, "Espresso") == 0) {
			price = 2800;
		}
		else if (strcmp(deleteMenu, "CafeLatte") == 0) {
			price = 4300;
		}

		total = price;
		for (int i = delIdx; i < 5; i++) {
			menulist[i - 1] = menulist[i];
		}
		orderIdx -= 1;
	}
}

// 결제하기
void pay() {
	int money;
	printf("전체 금액:%d\n", total);
	printf("지불할 금액:");
	scanf("%d", &money);
	if (total <= money) {
		printf("결제완료! 잔돈은 %d원\n", money - total);
		total = 0;
		for (int i = 0; i < orderIdx; i++) {
			menulist[i] = "";
		}
		orderIdx = 0;
	}
	else {
		printf("금액이 부족합니다\n");
	}
}
