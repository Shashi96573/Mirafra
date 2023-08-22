//prime num b/w 2 num

#include<stdio.h>
int main()
{
	int a=1,b=20,i,j;
	for(i=a;i<=b;i++)
	{
		for(j=2;j<b/2;j++)
		{
			if(i%j==0)
				break;
		}
		if(i%j!=0)
			printf("%d\n",i);
	}
}
