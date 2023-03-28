#include<stdio.h>

#define max2(a,b) (a)>(b)?printf("big=%d\n",a):printf("big=%d\n",b);

#define max3(a,b,c) ((a)>(b)&&(a)>(c))?printf("big=%d\n",a):b>c?printf("big=%d\n",b):printf("big=%d\n",c);


int main()
{
	int a,b,c;
	printf("enter 2 num:");
	scanf("%d %d",&a,&b);
	max2(a,b)
		printf("enter 3 num:");
	scanf("%d %d %d",&a,&b,&c);
	max3(a,b,c)
}
