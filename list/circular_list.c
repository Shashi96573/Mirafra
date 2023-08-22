#include<stdio.h>
#include<stdlib.h>

typedef struct circular
{
	int data;
	struct circular *next;
}circular;

circular *createnode(void)
{
	circular *newnode=(circular*)malloc(sizeof(circular));
	newnode->data=1;
	newnode->next=NULL;
	return newnode;
}

void display(circular *head)
{
	circular *p=NULL;
	p=head;
	while(p->next!=head)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}

int main()
{
	circular *head=NULL,*node=NULL,*tail=NULL;int i=0;
	while(i<5)
	{
		node=createnode();
		if(head==NULL)
			head=node;
		else
		{
			tail->next=node;
		}
		tail=node;
		i++;
	}
	tail->next=head;
	display(head);
}
