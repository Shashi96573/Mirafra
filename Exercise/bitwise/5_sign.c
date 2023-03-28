#include<stdio.h>
int main()
{
	int n;
	printf("enter num:");
	scanf("%d",&n);
	if(((n>>31)&1)==1)
		printf("-ve\n");
	else{
		printf("+ve\n");
	}
}

