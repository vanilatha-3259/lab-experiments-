
#include <stdio.h>

int main() 
{
    float speed, time, distance;

    printf("Distance Calculator (Constant Speed)\n");
    printf("------------------------------------\n");

    printf("Enter speed (in m/s ): ");
    scanf("%f", &speed);

    printf("Enter time (in seconds ): ");
    scanf("%f", &time);

    distance = speed * time;

    printf("\nDistance travelled: %.2f m\n", distance);

    return 0;
}
