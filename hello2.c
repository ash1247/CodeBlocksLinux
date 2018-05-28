#include <stdio.h>
#include <math.h>

int main()
{
    int integer1, integer2, sum, multiply, division, x, power;

    printf("enter first integer\n");
    scanf("%d", &integer1);
    printf("enter second integer\n");
    scanf("%d", &integer2);

    sum = integer1+integer2;
    multiply = integer1 * integer2;
    division = integer1/ integer2;
    x = integer1 % integer2;
    power = pow(integer1, 2);

    printf("The sum is %d\n", sum);
    printf("The multiplication is %d\n", multiply);
    printf("The division is %d\n", division);
    printf("The x is %d\n", x);
    printf("The power of integer1 is %d", power);

    return 0;
}
