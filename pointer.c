#include<stdio.h>
int main()
{
int a=5;
int *p=&a;
int **q=&p;
int ***r=&q;
printf("%d %d %d\n",*p,**q,***r);
}

