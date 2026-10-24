
#include <stdio.h>
#include <math.h>

int main() 
{
double n, r;
printf("Square Root Calculator\n");
printf("----------------------\n");
printf("Enter a number: ");
scanf("%lf", &n);
r = sqrt(n);
printf("\nThe square root of %.2f is %.4f\n", n, r);

return 0;
}
