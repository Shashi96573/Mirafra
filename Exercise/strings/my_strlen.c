#include<stdio.h>
int my_strlen(char *s)
{
	int l=0;
	while(*s!='\0')
	{
		*s++;
		l++;
	}
	return l;
}

int main()
{
	char s[50];
	printf("enter str:");
	scanf("%s",s);
	printf("%d\n",my_strlen(s));
}

