#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//结构体定义 
struct Node{
	int num;
	struct Node *next;
};

//创建链表的函数 
struct Node *create(int n){
	if (n <= 0)return NULL;   //如果n小于等于0，返回空指针 
	else{
		//head是头指针，用于指向头结点，p1用于指向新创建的结点，p2用于指向当前链表中最后一个结点 
		struct Node *head, *p1, *p2=NULL ;
		int i;
		//下面的循环创建有n个结点的链表 
		for (i = 1; i <= n; i++){
			p1 = (struct Node*)malloc(sizeof(struct Node));
			scanf("%d", &p1->num);
			if (i == 1){      //如果新建的是第一个结点，让head指向它 
				head = p1;
			}
			else{		   //如果新建的不是第一个结点，让前一个结点指向它 
				p2->next = p1;
			}
			p2 = p1;  //修改p2的指向，此时刚才新创建的结点成为链表中最后一个结点 
		}
		p2->next = NULL;  //p2指向的结点成为最终链表中的最后一个结点 
		return head;
	}
}

//遍历输出链表的函数 
void printLinkedList(struct Node *head){
	struct Node *p;
	int node;
	if (head == NULL)
		printf("This linked list is empty!\n"); //如果实参为NULL的处理 
	else{
		p = head;
		node = 0; //用于结点计数 
		while (p ){
			node++;
			printf("node%d:%d\n", node, p->num);
			p = p->next;
		}
	}
	return;
}

//删除结点的函数，删除num成员等于参数num的结点 
struct Node *deleteNode(struct Node *head, int num){
	//p1用于指向要删除的结点，p2用于指向要删除的结点的前一个结点
	struct Node *p1, *p2;
	if (head == NULL){ //如果实参为NULL的处理
		printf("This linked list is empty!\nCould not delete any node!\n");
		return NULL;
	}
	else{
		p1 = head;
		//下面的while循环用于定位要删除的结点 
		while (p1 != NULL){
			if (p1->num == num) break;
			p2 = p1;
			p1 = p1->next;
		}
		if (p1 == head){  //第一种情况，第一个结点就是要删除的结点，需要修改头指针 
			head = p1->next;
			free(p1);
			printf("Node have deleted!\n");
		}
		else if (p1 == NULL) //第二种情况，没有找到要删除的结点 
			printf("Node not found!\nCould not delete any node!\n");
		else{  //第三种情况，要删除的结点在后面 
			p2->next = p1->next;
			free(p1);
			printf("Node have deleted!\n");
		}
		return head; //返回头指针
	}
}

//插入结点的函数（假设结点是有序的，需要定位插入的位置） 
struct Node *insertNode(struct Node *head, int num){
	//首先创建新结点 
	struct Node *pnew = (struct Node*)malloc(sizeof(struct Node));
	pnew->num = num;
	//p2用于指向插入位置的前一个结点，p1用于指向插入位置的后一个结点
	struct Node *p1, *p2;
	if (head == NULL){  //原来的链表是空链表，插入的结点称为该链表的第一个结点 
		printf("This linked list is empty!\nNow a new node is inserted!\n");
		pnew->next = NULL;
		return pnew;
	}
	else{
		p1 = head;
		//下面的while循环用于定位要插入新结点的位置 
		while (p1 != NULL){
			if (p1->num>num) break;
			p2 = p1;
			p1 = p1->next;
		}
		if (p1 == head){ //第一种情况，在第一个结点之前插入新结点，需要修改头指针
			pnew->next = p1;
			printf("A new node is inserted in the first place!\n");
			return pnew;  //新结点的地址成为新的头指针 
		}
		else if (p1 == NULL){ //第二种情况，在原来的最后一个结点后面插入新结点 
			pnew->next = NULL;
			p2->next = pnew;
			printf("A new node is inserted in the last place!\n");
			return head;
		}
		else{  //第三种情况，在原来链表的中间位置插入新结点
			p2->next = pnew;
			pnew->next = p1;
			printf("A new node is inserted in some middle place!\n");
			return head;
		}
	}
}

//释放链表的函数
void freeLinkedList(struct Node *head){
	//p2用于指向马上要释放的结点，p1用于指向链表剩余部分的第一个结点 
	struct Node *p1, *p2;
	int num;
	if (head == NULL) //如果实参为NULL的处理
		printf("This linked list is empty!\nCould not free any node!\n");
	else{
		p1 = head;
		//下面的while循环用于释放所有结点
		while (p1 != NULL){
			p2 = p1;
			p1 = p2->next;
			num = p2->num;
			free(p2);
			printf("Node %d has been freed!\n", num);
		}
	}
}

//求链表长度的函数 
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
	//下面是创建链表并输出的测试代码 
	int n;
	printf("Now, we are gonging to create a new linked list!\n");
	printf("Please input the number of nodes:");
	scanf("%d", &n);
	struct Node *head = create(n);
	if (head){
		printf("After the linked list is created：\n");
		printLinkedList(head);
	}

	//下面是输出链表长度的测试代码
	/*
	printf("\n");
	printf("This linked list has %d nodes.\n",lengthOfLinkedList(head));
	*/


	//下面是删除结点的测试代码 
	/*
	printf("\n");
	struct Node *headNew1=deleteNode(head,60);
	if(headNew1){
	printf("After the node is deleted：\n");
	printLinkedList(headNew1);
	}*/
	//下面是插入结点的测试代码 
	/*
	printf("\n");
	struct Node *headNew2=insertNode(head,60);
	if(headNew2){
	printf("After the node is inserted：\n");
	printLinkedList(headNew2);
	}*/

	//下面是释放链表的测试代码
	printf("\n");
	freeLinkedList(head);

	return 0;
}
