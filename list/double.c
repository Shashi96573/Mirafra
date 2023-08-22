#include<stdio.h>
#include<stdlib.h>

typedef struct list
{
	struct list *prev;
	int data;
	struct list *next;
}list;

list *createnode(void)
{
	list *node=(list*)malloc(sizeof(list));
	node->prev=NULL;
	node->data=1;
	node->next=NULL;
	return node;
}

int main()
{
	list *head=NULL,*node=NULL,*tail=NULL,*p=NULL;int i=0;
	while(i<4)
	{
		node=createnode();
		if(head==NULL)
			head=node;
		else{
			tail->next=node;
			node->prev=tail;
		}
		tail=node;
		i++;
	}
	p=head;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}
