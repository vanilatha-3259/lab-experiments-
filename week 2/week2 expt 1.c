#include<stdio.h>
void main()
{
int a,b,c,s,g;
printf("enter the three numbers:");
scanf("%d%d%d",&a,&b,&c);
s=a+b+c;
g=s/3;
printf("\nthe sum of the given three numbers is %d",s);
printf("\nthe average of the given three numbers is %d",g);
}