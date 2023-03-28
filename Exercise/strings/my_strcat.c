#include<stdio.h>

char *my_strcat(char *d,const char *s)
{
	char *t=d;

	while(*d!='\0')
	{
		d++;
	}

	while(*s!='\0')
	{
		*d=*s;
		d++;
		s++;
	}

	*d='\0';

	return t;
}

int main()
{
	char d[50],s[50];

	printf("enter 2 strs:");
	scanf("%s %s",d,s);

	my_strcat(d,s);

	printf("%s\n",d);
}
