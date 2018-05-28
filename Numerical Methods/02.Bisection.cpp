/*--------------------------------------------------------------------------------------------------------------
| A program that finds a root of a nonlinear equation using the bisection method                               |                                                                                                               |
|______________________________________________________________________________________________________________|*/

#include <bits/stdc++.h>
#define EPS 0.00000001 // Error bound
#define F(x) pow((x),3)-(x)-11

void bim(double *a, double *b, double *root, int *s, int *count);

int main(void)
{
    int s, count;// s = status, count = numbers of iteration done
    double a,b,root; //a = Left endpoint of invertal, b = Right endpoint of interval, root = Final Solution

    printf("\n");
    printf("Solution by Bisection method \n");
    printf("Input starting values \n");
    scanf("%lf %lf", &a, &b);

    bim(&a, &b, &root, &s, &count);

    if(s==0)
    {
        printf("\n\n");
        printf("Starting point (Do not bracket any root\n");
        printf("Check whether they bracket EVEN root \n\n");

    }
    else
    {
        printf("\nRoot = %lf \n", root);
        printf("F(root) = %lf\n", F(root) );
        printf("\n");
        printf("Iterations = %d\n", count);
        printf("\n");
    }

    return 0;
}
//This function finds a root of nonlinear equation in the interval [a,b] using the bisection method
void bim(double *a, double *b, double *root, int *s, int *count)
{
    double x1, x2, x0, f0, f1, f2;

    x1 = *a;
    x2 = *b;
    f1 = F(x1);
    f2 = F(x2);
    *count = 1;

    //Test if initial values bracket a single root
    if(f1*f2 > 0)
    {
        *s = 0;
        return;
    }
    else
    {
        printf("\nIteration No.\t\tValue\n\n");
    }
    while( *s != 1 )
    {
        x0 = (x2+x1)/2.0;
        f0 = F(x0);

        if(f0 == 0)
        {
            *s=1;
            *root=x0;
            return;
        }
        if( f1 * f0 < 0)
        {
            x2 = x0;
        }
        else
        {
            x1 = x0;
            f1 = f0;
        }
        //Test for accurancy and repeat the process if necessary
        printf("\t%d\t\t%lf\n", *count, x1);
        if(fabs((x2-x1)/x2) < EPS )
        {
            *s = 1;
            *root =  (x2+x1)/2.0;
            break;
        }
        *count = *count + 1;
    }
}


