#include<stdio.h>
#define s 5
void display(int a[],int n);

int s1[s],s2[s],top=-1,bottom=-1,i,j;

void push(void)
{
	if(top==s){
		printf("full\n");}
	else if(top==-1&&bottom==-1){
		s1[++top]=2;}
	else if(bottom!=-1)
	{
		for(i=0,j=bottom;i<=bottom;i++,j--)
		{
			s1[i]=s2[j];
		}
		top=i--;bottom=-1;
		s1[top]=2;
	}
	else{
		s1[++top]=2;
	}
	display(s1,top);
}

void pop(void)
{
	int i,j;
	if(top==-1)
		printf("empty\n");
	else if(top!=-1&&bottom==-1)
	{
		for(i=0,j=top;i<=j;i++,j--)
		{
			s2[i]=s1[j];
		}
		top=-1;bottom=i--;
	}
	else{
		++bottom;
	}
	display(s2,bottom);
}

void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}


int main()
{
	int n;
	while(1)
	{
		scanf("%d",&n);
		switch(n)
		{
			case 1:push();break;
			case 2:pop();break;
			case 3:return 0;break;
		}
	}
}
