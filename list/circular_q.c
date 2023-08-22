#include<stdio.h>
#define s 5

int queue[s],front=-1,rear=-1;

int isfull(void)
{
	if(((rear+1)%s)==front)
		return -1;
	else
		return 1;
}

int isempty(void)
{
	if(front==-1&&rear==-1)
		return -1;
	else
		return 1;
}

void insert(int x)
{
	if(isfull()==-1)
		printf("queue full\n");
	else if(isempty()==-1)
	{
		front=rear=0;
		queue[rear]=x;
	}
	else{
rear=(rear+1)%s;
		queue[rear]=x;}
}

void delete(void)
{
	if(isempty()==-1)
		printf("queue empty\n");
	else if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		front=(front+1)%s;
	}
}

void display(void)
{
	int i;
	if(isempty()==-1)
		printf("queue empty\n");
	else
		for(i=front;i!=rear;i=(i+1)%s)
		{
			printf("%d ",queue[i]);
		}
printf("%d ",queue[rear]);
}


void peek(void)
{
	if(isempty()==-1)
		printf("queue empty\n");
	else
		printf("%d\n",queue[front]);
}

int main()
{
	int n;
	while(1)
	{
		printf("enter choice\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("enter num:");
				scanf("%d",&n);
				insert(n);break;
			case 2:delete();break;
			case 3:display();break;
			case 4:peek();break;
			case 5:return 0;
		}
	}
}

