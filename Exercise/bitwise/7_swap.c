#include<stdio.h>
int main()
{
	int a,b;
	
	printf("enter 2 num:");
	scanf("%d%d",&a,&b);

	a=a^b;
	b=a^b;
	a=a^b;

	printf("%d %d\n",a,b);
}
