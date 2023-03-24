#include<stdio.h>
#include<stdlib.h>

typedef struct prime
{
	int n;
	struct prime *next;
}prime;

prime *createnode(int i)
{
	prime *new=(prime*)malloc(sizeof(prime));
	new->n=i;
	new->next=NULL;
	return new;
}

void printll(prime *p)
{
	while(p)
	{
		printf("%d\n",p->n);
		p=p->next;
	}
}

int primenum(int i)
{
	int x=0,j=2;
	for(;j<i/2;j++)
	{
		if(i%j==0) 
		{
			x++;
			if(x>1)
				break;
		}
	}
	return x;
}


int main()
{
	prime *H=NULL,*N=NULL,*L=NULL;
	int i,j,x;
	for(i=2;i<=100;i++)
	{
		x=primenum(i);
		if(x==0)
		{
			N=createnode(i);
			if(!H)
				H=N;
			else
			{
				L->next=N;
			}
			L=N;
		}
	}
	printll(H);
}
