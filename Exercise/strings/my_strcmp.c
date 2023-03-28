#include<stdio.h>

int my_strcmp(char *s,char *d)
{

	while(*s!='\0'||*d!='\0')
	{

		if(*s>*d)
			return 1;

		if(*s<*d)
			return -1;

		if(*s==*d)
			s++;
		d++;

	}
	return 0;
}

int main()
{
	char s[50],d[50];

	printf("enter 2 strs:");
	scanf("%s %s",s,d);

	printf("%d\n",my_strcmp(s,d));
}
