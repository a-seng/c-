#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//�ṹ�嶨�� 
struct Node{
	int num;
	struct Node *next;
};

//��������ĺ��� 
struct Node *create(int n){
	if (n <= 0)return NULL;   //���nС�ڵ���0�����ؿ�ָ�� 
	else{
		//head��ͷָ�룬����ָ��ͷ��㣬p1����ָ���´����Ľ�㣬p2����ָ��ǰ���������һ����� 
		struct Node *head, *p1, *p2=NULL ;
		int i;
		//�����ѭ��������n���������� 
		for (i = 1; i <= n; i++){
			p1 = (struct Node*)malloc(sizeof(struct Node));
			scanf("%d", &p1->num);
			if (i == 1){      //����½����ǵ�һ����㣬��headָ���� 
				head = p1;
			}
			else{		   //����½��Ĳ��ǵ�һ����㣬��ǰһ�����ָ���� 
				p2->next = p1;
			}
			p2 = p1;  //�޸�p2��ָ�򣬴�ʱ�ղ��´����Ľ���Ϊ���������һ����� 
		}
		p2->next = NULL;  //p2ָ��Ľ���Ϊ���������е����һ����� 
		return head;
	}
}

//�����������ĺ��� 
void printLinkedList(struct Node *head){
	struct Node *p;
	int node;
	if (head == NULL)
		printf("This linked list is empty!\n"); //���ʵ��ΪNULL�Ĵ��� 
	else{
		p = head;
		node = 0; //���ڽ����� 
		while (p ){
			node++;
			printf("node%d:%d\n", node, p->num);
			p = p->next;
		}
	}
	return;
}

//ɾ�����ĺ�����ɾ��num��Ա���ڲ���num�Ľ�� 
struct Node *deleteNode(struct Node *head, int num){
	//p1����ָ��Ҫɾ���Ľ�㣬p2����ָ��Ҫɾ���Ľ���ǰһ�����
	struct Node *p1, *p2;
	if (head == NULL){ //���ʵ��ΪNULL�Ĵ���
		printf("This linked list is empty!\nCould not delete any node!\n");
		return NULL;
	}
	else{
		p1 = head;
		//�����whileѭ�����ڶ�λҪɾ���Ľ�� 
		while (p1 != NULL){
			if (p1->num == num) break;
			p2 = p1;
			p1 = p1->next;
		}
		if (p1 == head){  //��һ���������һ��������Ҫɾ���Ľ�㣬��Ҫ�޸�ͷָ�� 
			head = p1->next;
			free(p1);
			printf("Node have deleted!\n");
		}
		else if (p1 == NULL) //�ڶ��������û���ҵ�Ҫɾ���Ľ�� 
			printf("Node not found!\nCould not delete any node!\n");
		else{  //�����������Ҫɾ���Ľ���ں��� 
			p2->next = p1->next;
			free(p1);
			printf("Node have deleted!\n");
		}
		return head; //����ͷָ��
	}
}

//������ĺ�����������������ģ���Ҫ��λ�����λ�ã� 
struct Node *insertNode(struct Node *head, int num){
	//���ȴ����½�� 
	struct Node *pnew = (struct Node*)malloc(sizeof(struct Node));
	pnew->num = num;
	//p2����ָ�����λ�õ�ǰһ����㣬p1����ָ�����λ�õĺ�һ�����
	struct Node *p1, *p2;
	if (head == NULL){  //ԭ���������ǿ���������Ľ���Ϊ������ĵ�һ����� 
		printf("This linked list is empty!\nNow a new node is inserted!\n");
		pnew->next = NULL;
		return pnew;
	}
	else{
		p1 = head;
		//�����whileѭ�����ڶ�λҪ�����½���λ�� 
		while (p1 != NULL){
			if (p1->num>num) break;
			p2 = p1;
			p1 = p1->next;
		}
		if (p1 == head){ //��һ��������ڵ�һ�����֮ǰ�����½�㣬��Ҫ�޸�ͷָ��
			pnew->next = p1;
			printf("A new node is inserted in the first place!\n");
			return pnew;  //�½��ĵ�ַ��Ϊ�µ�ͷָ�� 
		}
		else if (p1 == NULL){ //�ڶ����������ԭ�������һ������������½�� 
			pnew->next = NULL;
			p2->next = pnew;
			printf("A new node is inserted in the last place!\n");
			return head;
		}
		else{  //�������������ԭ��������м�λ�ò����½��
			p2->next = pnew;
			pnew->next = p1;
			printf("A new node is inserted in some middle place!\n");
			return head;
		}
	}
}

//�ͷ�����ĺ���
void freeLinkedList(struct Node *head){
	//p2����ָ������Ҫ�ͷŵĽ�㣬p1����ָ������ʣ�ಿ�ֵĵ�һ����� 
	struct Node *p1, *p2;
	int num;
	if (head == NULL) //���ʵ��ΪNULL�Ĵ���
		printf("This linked list is empty!\nCould not free any node!\n");
	else{
		p1 = head;
		//�����whileѭ�������ͷ����н��
		while (p1 != NULL){
			p2 = p1;
			p1 = p2->next;
			num = p2->num;
			free(p2);
			printf("Node %d has been freed!\n", num);
		}
	}
}

//�������ȵĺ��� 
int lengthOfLinkedList(struct Node *head){
	if (head == NULL)
		return 0;
	else{
		int count = 0;
		struct Node *p = head;
		while (p != NULL){
			count++;
			p = p->next;
		}
		return count;
	}
}

int main(){
	//�����Ǵ�����������Ĳ��Դ��� 
	int n;
	printf("Now, we are gonging to create a new linked list!\n");
	printf("Please input the number of nodes:");
	scanf("%d", &n);
	struct Node *head = create(n);
	if (head){
		printf("After the linked list is created��\n");
		printLinkedList(head);
	}

	//��������������ȵĲ��Դ���
	/*
	printf("\n");
	printf("This linked list has %d nodes.\n",lengthOfLinkedList(head));
	*/


	//������ɾ�����Ĳ��Դ��� 
	/*
	printf("\n");
	struct Node *headNew1=deleteNode(head,60);
	if(headNew1){
	printf("After the node is deleted��\n");
	printLinkedList(headNew1);
	}*/
	//�����ǲ�����Ĳ��Դ��� 
	/*
	printf("\n");
	struct Node *headNew2=insertNode(head,60);
	if(headNew2){
	printf("After the node is inserted��\n");
	printLinkedList(headNew2);
	}*/

	//�������ͷ�����Ĳ��Դ���
	printf("\n");
	freeLinkedList(head);

	return 0;
}
