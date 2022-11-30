### **문제1**

```C
#include<stdio.h>
#include<stdlib.h>

/*노드 정의*/
typedef struct node {
	int data; // 데이터
	struct node* left, * right; // 링크
}node;

/*노드 생성 함수*/
node* newNode(int item) {
	node* temp = (node*)malloc(sizeof(node)); // 메모리 할당
	temp->data = item; // 데이터
	temp->left = temp->right = NULL; // 링크

	return temp;
}

/* 중순위 탐방*/
void inorder(struct node* root) {
	if (root != NULL) {
		inorder(root->left);
		printf("%d ", root->data);
		inorder(root->right);
	}
}

/*이진 트리의 left => 이중 연결 리스트의 prev*/
void getPrev(node* root) {
	static node* prev = NULL; // static 변수 -> 순환 호출 과정에서 "1번만" 호출

	if (root != NULL) {
		getPrev(root->left);
		root->left = prev;
		prev = root;
		getPrev(root->right);
	}
}

/*이진 트리의 right => 이중 연결 리스트의 next*/
node* getNext(node* root) {
	node* prev = NULL;

	// 중순위 탐방을 통해 말단 노드 찾기
	while (root && root->right != NULL)
		root = root->right;

	// 가장 오른쪽의 말단 노드에서부터 left 포인터를 통해 역순으로 탐방
	while (root && root->left != NULL) {
		prev = root;
		root = root->left;
		root->right = prev;
	}

	// 가장 왼쪽 노드 => 헤드 노드
	return (root);
}

/*완전 이진 트리 = > 이중 연결 리스트*/
node* BTToDLL(node* root) {
	// prev 포인터 설정
	getPrev(root);

	// next 포인터 설정 & head 노드 반환
	return getNext(root);
}

/*head 노드와 제일 마지막 노드를 연결*/
void linkFNL(node* head, node* tail) {
	tail->right = head;
	head->left = tail;
}


/*이중 리스트 탐방*/
void printList(node* root) {
	node* start = root;
	while (root != NULL) {
		printf("<-[%d]-> ", root->data);
		if (root->right == start)
			break;
		else {
			root = root->right;
		}
	}
}

int main(void) {
	// 노드 생성
	node* root = newNode(11);
	root->left = newNode(13);
	root->right = newNode(16);
	root->left->left = newNode(26);
	root->left->right = newNode(31);
	root->right->left = newNode(37);

	printf("이진 트리 중순위 탐방: ");
	inorder(root);
	printf("\n");

	// 헤드 노드, 테일 노드
	node* head = BTToDLL(root); 
	node* tail = NULL;
	while (root != NULL) {
		tail = root;
		root = root->right;
	}

	// 이중 연결 리스트 -> 원형 이중 연결 리스트
	linkFNL(head, tail);

	printf("원형 이중 연결 리스트: ");
	printList(head);

	return 0;
}

```
