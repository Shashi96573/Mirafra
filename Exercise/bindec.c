#include<stdio.h>
int p(int i)
{
	int x=1;
	while(i!=0)
	{
		x=x*2;
		i--;
	}
	return x;
}

int main()
{
	int b,i=0,x=0,y;
	printf("enter bits:");
	scanf("%d",&b);
	while(b!=0)
	{
		y=b%10;
		b=b/10;
		x=x+(p(i)*y);
		i++;
	}
	printf("%d\n",x);
}
