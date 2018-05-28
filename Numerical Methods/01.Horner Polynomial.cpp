/*--------------------------------------------------------------------------------------------------------------
| A program that evaluates a polynomial of degree N at any point X using horner's rule                         |                                                                                     |
|______________________________________________________________________________________________________________|*/

#include <bits/stdc++.h>

float horner(int n, float *a, float x);

int main(void)
{
    int n, i;  //n = degree oof polynomial
    float x, p; //point of evaluation = x, value of polynomial at x = p

    printf("Input degree of polynomial, n\n");
    scanf("%d", &n);
    float a[n]; //array of polynomial coefficient

    printf("Input polynomial coefficeints one by one\n");
    for(i = 0; i <= n; i++)
    {
        scanf("%f", &a[i] );
    }

    printf("Input the value of x(point of evaluation) \n");
    scanf("%f", &x );

    p = horner(n, a, x);

    printf("\n");
    printf("f(x) = %f at x = %f \n\n", p, x);
    return 0;
}

float horner(int n, float *a, float x)
{
    /*horner computges the value of a polynomial of order n
    at any given point x*/
    int i;
    float p;

    p = a[n];

    for(i = n - 1; i >= 0; i--)
    {
        p = p * x + a[i];
    }

    return p;
}
