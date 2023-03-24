#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k=0,x=0,n;

	printf("enter no of elements:");
	scanf("%d",&n);

	int a[n],b[n];

	printf("enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			b[k]=a[i];k++;
		}
		if(i>0)
		{
			x=0;
			for(j=0;j<i;j++)
			{
				if(a[i]==a[j])
				{
					x=1;
				}
			}
			if(x!=1)
			{
				b[k]=a[i];k++;
			}
		}
	}

	/*	int c[k];

		for(i=0;i<=k;i++)
		{
		c[i]=b[i];
		}*/

	for(i=0;i<k;i++)
	{
		printf("%d",b[i]);
	}
	printf("\n");
}
