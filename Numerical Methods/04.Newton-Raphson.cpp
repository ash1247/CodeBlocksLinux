/*-------------------------------------------------------------------------=-------------------------------------
| A program that finds a root of a nonlinear equation using the Newton-Raphson method                          | |                                                                                                              |
|______________________________________________________________________________________________________________|*/

#include <bits/stdc++.h>
#define EPS 0.00000001    // Error bound
#define MAXIT 20        // Maximum number of iteration permitted
#define F(x) pow((x),3)-(x)-11
#define FD(x) 3*pow((x),2)-1

int main(void)
{
    int count = 1;        //count = numbers of iteration done
    double x0,xn,fx,fdx; //x0 = initial value of x, xn = new value of x, function value at x,
                        // value of function derivative at x

    printf("Input initial value of x \n");
    scanf("%lf", &x0);
    printf("\n");
    printf("Solution by Newton-Raphson method \n");
    printf("\n");

    while( F(xn) != 0)
    {
        fx = F(x0);
        fdx = FD(x0);
        xn = x0 - (fx/fdx);
        if(fabs((xn - x0)/xn) < EPS)
        {
            printf("Root = %lf \n", xn);
            printf("Function Value = %lf \n", F(xn) );
            printf("Number of iteration = %d \n", count);
            printf("\n");
        }
        else
        {
            x0 = xn;
            count++;

            if( count > MAXIT )
            {
                printf("\nSolution does not converge \n");
                printf("In %d iterations \n", MAXIT);
                break;
            }

        }

    }

    return 0;
}
