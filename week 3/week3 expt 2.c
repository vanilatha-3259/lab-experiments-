
#include <stdio.h>
#include <math.h>

int main() 
{
    double principal, rate, time,amount, compound_interest;
    printf("Compound Interest Calculator\n"); 
    printf("----------------------------\n");   
    printf("Enter the Principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the Annual Rate of Interest (in %%): ");
    scanf("%lf", &rate);

    printf("Enter the Time period (in years): ");
    scanf("%lf", &time);

    amount = principal * pow((1 + rate / 100.0), time);
    
    
    compound_interest = total_amount - principal;

    
    printf("\nCalculation Breakdown:");
    printf("\n----------------------------");
    printf("\nPrincipal Amount     : %.2f", principal);
    printf("\nInterest Rate        : %.2f%%", rate);
    printf("\nTime Period          : %.2f years", time);
    printf("\n----------------------------");
    printf("\nInterest Earned (CI) : %.2f", compound_interest);
    printf("\nTotal Final Value    : %.2f\n", amount);

    return 0;
}
