#include<stdio.h>
char *my_strncpy(char *s,char *d,int n)
{
	int l=0;
	while(l<n)
	{
		*d=*s;
		d++;
		s++;
l++;
	}

	return d;
}

int main()
{
	int n;
	char s[50],d[50];

	printf("enter strs:");
	scanf("%s %s",d,s);

	printf("enter size:");
	scanf("%d",&n);

	my_strncpy(s,d,n);

	printf("%s\n",d);
}
