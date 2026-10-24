
#include <stdio.h>

int main() 
{
float p, r, t,interest,amount;
printf("Simple Interest Calculator\n");
printf("---------------------------\n");
printf("Enter the principal amount: ");
scanf("%f", &p);
printf("Enter the annual rate of interest (in %%): ");
scanf("%f", &r);
printf("Enter the Time period (in years): ");
scanf("%f", &t);
interest = (p * t * r) / 100.0;
amount = p + interest;
    
    
printf("\n---------------------------");
printf("\nPrincipal Amount   : %.2f", p);
printf("\nInterest Rate      : %.2f%%", r);
printf("\nTime Period        : %.2f years", t);
printf("\n---------------------------");
printf("\nInterest           : %.2f", interest);
printf("\nTotal Final Value  : %.2f\n", amount);

    return 0;
}
