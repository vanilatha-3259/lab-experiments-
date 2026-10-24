
#include <stdio.h>
#include <math.h>

int main() 
{
    double a, b, c, s, area;

    printf("Triangle Area Calculator (Heron's Formula)\n");
    printf("------------------------------------------\n");

    printf("Enter the length of side a: ");
    scanf("%lf", &a);
    printf("Enter the length of side b: ");
    scanf("%lf", &b);
    printf("Enter the length of side c: ");
    scanf("%lf", &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) 
    {
        s = (a + b + c) / 2.0;
        area = sqrt(s * (s - a) * (s - b) * (s - c));

        printf("\nCalculation Breakdown:");
        printf("\n------------------------------------------");
        printf("\nSemi-perimeter (s)  : %.2f", s);
        printf("\nTotal Area         : %.2f\n", area);
    } 
    else 
    {
        printf("\n The given side lengths do not form a  triangle.\n");
    }

    return 0;
}
