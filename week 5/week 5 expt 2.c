#include <stdio.h>

int main() 
{
    float units, bill;

    printf("Electricity Bill Calculator\n");
    printf("---------------------------\n");
    
    printf("Enter the total units consumed: ");
    scanf("%f", &units);

    if (units < 0) 
    {
        printf("Error: Units consumed cannot be negative.\n");
        return 1;
    }

    if (units <= 100) 
    {
        bill = units * 1.50;
    } 
    else if (units <= 200) 
    {
        bill = units * 2.50;
    } 
    else if (units <= 500) 
    {
        bill = units * 4.00;
    } 
    else 
    {
        bill = units * 6.00;
    }

    printf("---------------------------\n");
    printf("Total Bill Amount: Rs. %.2f\n", bill);

    return 0;
}

    
    
    