
#include <stdio.h>

int main() 
{
int op;
float c, f;
printf("Temperature Converter\n");
printf("1. Convert Celsius to Fahrenheit\n");
printf("2. Convert Fahrenheit to Celsius\n");
printf("Enter your choice (1 or 2): ");
scanf("%d", &op);
if (op == 1) 
{
    printf("\nEnter temperature in Celsius: ");
    scanf("%f", &c);
        
        
    f = (c * 9.0 / 5.0) + 32;
        
    printf("%.2f°C is equal to %.2f°F\n", c, f);
} 
else if (op == 2) 
{
     printf("\nEnter temperature in Fahrenheit: ");
     scanf("%f", &f);
        
     c = (f - 32) * 5.0 / 9.0;
        
     printf("%.2f°F is equal to %.2f°C\n", f, c);
} 
else 
{
    printf("\nInvalid choice");
}

    return 0;
}
