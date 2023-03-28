#include<stdio.h>

int atoi(char s[])
{
int x=0,i;
for(i=0;s[i]!=0;i++)
{
if(s[i]>=47&&s[i]<=58)
{
x=x*10+(s[i]-48);
}
else if(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122)
break;
}
return x;
}

int main()
{
char s[50];
scanf("%s",s);
printf("%d\n",atoi(s));
}
