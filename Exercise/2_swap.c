#include<stdio.h>

void swap(int *p,int *q)
{
	*p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;
}

int main()
{
	int a,b;
	printf("enter 2 num:");
	scanf("%d %d",&a,&b);
	printf("before swap a=%d b=%d\n",a,b);
	swap(&a,&b);
	printf("after swap a=%d b=%d\n",a,b);
}
