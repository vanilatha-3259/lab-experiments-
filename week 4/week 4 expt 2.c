
#include <stdio.h>

int main() 
{
    int a, b, c, n;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if ((a == b)||(b == c)||(c == a))
    printf("given numbers are not different");
    else
    {
    n = (a>b) ? ((a> c) ? a : c) : ((b > c) ? b : c);
    

    printf("The greatest number is: %d\n", n);
    }
    return 0;
}
