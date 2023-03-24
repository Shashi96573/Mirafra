#include<stdio.h>
union t
{
unsigned int a:4;
unsigned int b:4;
};

int main()
{
union t c;
c.a=14;
printf("%d\n",c.a);
c.b=15;
 printf("%d\n",c.b);
}
