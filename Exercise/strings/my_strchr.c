#include<stdio.h>
int my_strchr(const char *s,char c)
{
	int i=0;
	while(*s!='\0')
	{
		if(*s==c)
		{
			return i;
		}
		*s++;
		i++;
	}
}

int main()
{
	char s[50],c;

	printf("enter str:");
	scanf("%s",s);

	printf("enter char:");
	scanf(" %c",&c);

	printf("%d\n",my_strchr(s,c));
}
