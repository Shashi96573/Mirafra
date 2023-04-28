#include<stdio.h>
int main()
{
	int n,r,a=0,i=0,x;

	printf("enter num:");
	scanf("%d",&n);

	x=n;

	while(x)
	{
		x=x/2;
		a++;
	}

	int b[a];

	while(n)
	{
		r=n%2;
		n=n/2;
		b[i]=r;
		i++;
	}

	for(i=i-1;i>=0;i--)
	{
		printf("%d",b[i]);
	}	

	printf("\n");
}
