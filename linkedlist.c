#include<stdio.h>
#include<stdlib.h> 
typedef struct NODE{
		int data; //int 형 데이터 저장하는 변수 
		struct NODE* next; //노드 구조체의 주소 저장하는 포인터변수  
	}node;

//linked list 출력 프로그램 
int main()
{
	node* head = (node*)malloc(sizeof(node)); //헤드 노드 생성(노드를 메모리 동적할당으로 생성)
	head->next = NULL; //다음노드가 없음 
	
	node* node1 = (node*)malloc(sizeof(node)); //node1이라는 새로운 노드 동적할당
	node1->next = head->next; //node1의 다음주소에 head가 가리키던 다음주소(NULL)을 저장
	node1->data = 10;
	head->next = node1; //head노드의 next에 node1의 주소값을 저장 
	
	node* node2 = (node*)malloc(sizeof(node));
	node2->next = node1->next; //노드2의 다음주소에 노드1이 가르키던주소(NULL)넣음  
	node2->data = 20;
	node1->next = node2; //노드1의 다음주소에 노드2의 주소값 넣음 
	
	node* curr = head->next; //순회용 노드 생성 
	while(curr != NULL){
		printf("%d\n", curr->data);
		curr = curr->next;
	}
}


