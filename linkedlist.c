#include<stdio.h>
#include<stdlib.h> 
typedef struct NODE{
		int data; //int �� ������ �����ϴ� ���� 
		struct NODE* next; //��� ����ü�� �ּ� �����ϴ� �����ͺ���  
	}node;

//linked list ��� ���α׷� 
int main()
{
	node* head = (node*)malloc(sizeof(node)); //��� ��� ����(��带 �޸� �����Ҵ����� ����)
	head->next = NULL; //������尡 ���� 
	
	node* node1 = (node*)malloc(sizeof(node)); //node1�̶�� ���ο� ��� �����Ҵ�
	node1->next = head->next; //node1�� �����ּҿ� head�� ����Ű�� �����ּ�(NULL)�� ����
	node1->data = 10;
	head->next = node1; //head����� next�� node1�� �ּҰ��� ���� 
	
	node* node2 = (node*)malloc(sizeof(node));
	node2->next = node1->next; //���2�� �����ּҿ� ���1�� ����Ű���ּ�(NULL)����  
	node2->data = 20;
	node1->next = node2; //���1�� �����ּҿ� ���2�� �ּҰ� ���� 
	
	node* curr = head->next; //��ȸ�� ��� ���� 
	while(curr != NULL){
		printf("%d\n", curr->data);
		curr = curr->next;
	}
}


