#include<stdio.h>

void main()
{
int a,b,c,d,A,B;
printf("enter 4 numbers: ");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a<b)
  A=b ; 
else
  A=a;
if(c<d)
  B=d;
else
  B=c;
if(A>B)  
  printf("\n %d is big",A);
else
  printf("\n %d is big",B);  
}

    
    
    