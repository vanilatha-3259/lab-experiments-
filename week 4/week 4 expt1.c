#include <stdio.h>

int main() 
{
    int A, B, C, D, E, F, G;
    int result_a, result_b;
    int i, J, result_c;

   
    printf("Enter values for A, B, C, D, E, F, G ,i (separated by spaces): ");
    scanf("%d %d %d %d %d %d %d %d ", &A, &B, &C, &D, &E, &F, &G, &i );

    result_a = A + B * C + (D * E) + F * G;
    result_b = A / B * C - B + A * D / 3.0;

    printf("Result of A+B*C+(D*E) + F*G: %.2lf\n", result_a);
    printf("Result of A/B*C-B+A*D/3: %.2lf\n\n", result_b);
    

    result_c = A++ + B-- - A;
    printf("Result of A+++B---A: %d\n", result_c);

    printf("Enter an integer value for i: ");
    scanf("%d", &i);

    J = (i++) + (++i);
    printf("Result of J = (i++) + (++i): %d\n", J);
    

    return 0;
}

