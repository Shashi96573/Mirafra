#include<stdio.h>
#pragma pack(1)

struct m
{
int a;
char c;
float b;
}t;

int main()
{
struct m t={4438,68.666,'s'};
printf("%p %p %p\n",&t.a,&t.c,&t.b);
}
