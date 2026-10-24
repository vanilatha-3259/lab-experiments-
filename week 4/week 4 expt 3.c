#include <stdio.h>

int main() 
{
    int s1, s2, s3, s4, s5, total;
    float avg;

    printf("Enter marks for 5 subjects (separated by spaces): ");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    total = s1 + s2 + s3 + s4 + s5;

    avg= total / 5.0;

    printf("\nResults:\n");
    printf("---------------------\n");
    printf("Total Marks : %d\n", total);
    printf("Average     : %.2f\n", avg);

    return 0;
}
    