#include<stdio.h>

char *my_strcpy(char *d,const char *s)
{

char *t=d;

	while(*s!='\0')
	{
		*d=*s;
		d++;
		s++;
	}

	d='\0';

	return t;
}

int main()
{
	char s[50],d[50];

	printf("enter 2 strs:");
	scanf("%s %s",s,d);

	my_strcpy(s,d);

	printf("%s\n",d);
}
