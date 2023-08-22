#include<stdio.h>
#define s 5

void push(void);
void pop(void);
void display(void);

int stack[s],top=-1;

int isfull(void)
{
	if(top==s-1)
		return -1;
	else
		return 1;
}

int isempty(void)
{
	if(top==-1)
		return -1;
	else
		return 1;
}

int pip(void)
{
	printf("%d\n",stack[top]);
}

int main()
{
	int n;
	while(1)
	{
		printf("enter choice:");
		scanf("%d",&n);
		switch(n)
		{
			case 1:push();break;
			case 2:pop();break;
			case 3:display();break;
			case 4:pip();break;
			case 5:return 0;
		}
	}
}

void push(void)
{
	int n;
	if(isfull()==-1)
	{
		printf("stack full\n");
		return;
	}
	else
		scanf("%d",&n);
	stack[++top]=n;
}

void pop(void)
{
	int n;
	if(isempty()==-1)
	{
		printf("stack empty\n");
		return;
	}
	else
		--top;
}

void display(void)
{
	int i;
	if(top==-1)
	{
		printf("stack empty\n");
		return;
	}
	else
		for(i=0;i<=top;i++)
		{
			printf("%d ",stack[i]);
		}
	printf("\n");
}

