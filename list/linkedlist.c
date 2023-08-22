#include<stdio.h>
#include<stdlib.h>

typedef struct list
{
	int data;
	struct list *next;
}list;

list *createnode(void)
{
	int n;
	list *t=(list*)malloc(sizeof(list));
	scanf("%d",&n);
	t->data=n;
	t->next=NULL;
	return t;
}

void printll(list *l)
{
	while(l)
	{
		printf("%d\n",l->data);
		l=l->next;
	}
}

list *insert_beg(list *head)
{
	list *node=NULL; 
	node=createnode();
	node->next=head;
	head=node;
	return head;
}

list *insert_pos(list *head)
{
	int x;
	list *p=NULL,*node=NULL;
	p=head;
	node=createnode();
	printf("enter pos:");
	scanf("%d",&x);
	for(int i=1;i<x-1;i++)
	{
		p=p->next;
	}
	node->next=p->next;
	p->next=node;
	return head;
}

list *insert_end(list *head)
{
	list *node=NULL,*p=NULL;
	node=createnode();
	p=head;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=node;
	return head;
}

list *delete_beg(list *head)
{
	list *p=NULL,*t=NULL;
	p=head;
	p=p->next;
	head=p;
	free(t);
	return head;
}

list *delete_pos(list *head)
{
	list *p=NULL,*t=NULL;int i=1;
	p=head;
	while(i<3)
	{
		p=p->next;i++;
	}
	t=p->next;
	p->next=p->next->next;
	free(t);
	return head;
}


list *delete_end(list *head)
{
	list *p=NULL,*t=NULL;
	p=head;
	while(p->next->next!=NULL)
	{
		p=p->next;
	}
	t=p->next;
	p->next=NULL;
	free(t);
	return head;
}

list *reverse(list *head)
{
	list *prev=NULL,*current=NULL,*nextnode=NULL;
	current=nextnode=head;
	while(nextnode!=NULL)
	{
		nextnode=nextnode->next;
		current->next=prev;
		prev=current;
		current=nextnode;
	}
	head=prev;
	return head;
}

int main()
{
	int n,i=0;
	list *head=NULL,*node=NULL,*l=NULL;
	while(i<5)
	{
		node=createnode();
		if(head==NULL)
			head=node;
		else
		{
			l->next=node;
		}
		l=node;i++;
	}

	while(1)
	{

		printf("enter choice:");
		scanf("%d",&n);

		switch(n)
		{
			case 1:head=insert_beg(head);break;

			case 2:head=insert_pos(head);break;

			case 3:head=insert_end(head);break;

			case 4:head=delete_beg(head);break;

			case 5:head=delete_pos(head);break;

			case 6:head=delete_end(head);break;

			case 7:head=reverse(head);break;

			case 8:printll(head);break;

			case 9:return 0;break;
		}
	}
}
