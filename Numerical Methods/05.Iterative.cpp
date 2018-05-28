/*-------------------------------------------------
|  A program that solves a                        |
|  equation using Iterative                       |
|  method                                         |
|_________________________________________________|*/

#include <bits/stdc++.h>

using namespace std;

#define EPS 0.000001
#define EQN(x) 1/sqrt((x)+1)

int main()
{
    float x0,x,error;
    int i, MAXIT;
    printf("\nSolution by iterative method\n\n");
    printf("\nEnter initial guess of a root: ");
    cin >> x0;;
    printf("\n\nMaximum iterations allowed: ");
    cin >> MAXIT;
    printf("\n\nIteration\t\tValue of X\t\tError\n");
    for(i=1;i<=MAXIT;i++)
    {
        x = EQN(x0);
        error = fabs((x-x0)/x);
        printf("%d\t\t\t%f\t\t%f\n", i,x,error);
        if(error < EPS)
        {
            printf("Exit from iteration loop.\n");
            printf("\nThe root of the given function is %f\n",x0);
            return 0;
        }
        else
            x0= x;
    }
}
