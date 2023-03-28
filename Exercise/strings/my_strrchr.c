#include<stdio.h>

int my_strrchr(const char s[],int c)
{
	int l=0;

	for(;*s;s++,l++);

	for(;l>0;s--,l--)
	{
		if(*s==c)
			return l;
	}
}

int main()
{
	char s[50],c;

	printf("enter str:");
	scanf("%s",s);

	printf("enter char:");
	scanf(" %c",&c);

	printf("%d\n",my_strrchr(s,c));
}
