/*------------------------------------------------------------------
|  A program that solves a system of linear                        |
|  equations using Gaussian-Elimination                            |
|  method                                                          |
|__________________________________________________________________|*/

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    float factor,sum;
    int n, i, j, k;
    float a[10][10], x[10];

    printf("\nSolution by Gauss-Elimination Method\n");

    printf("What is the order of the matrix? \n");
    cin >> n;

    printf("Input elements of augmented matrix row-wise \n");

    for(i = 1; i<=n;i++)
        for(j=1;j<=n+1;j++)
            cin >> a[i][j];

    for(j=1;j<=n;j++)
    {
        for(i = 1;i<=n;i++)
        {
            if(i>j)
            {
                factor = a[i][j]/a[j][j];
                for(k =1; k<=n+1;k++)
                {
                    a[i][k] = a[i][k] - factor * a[j][k];
                }
            }
        }
    }

    x[n] = a[n][n+1]/a[n][n];
    for(k = n-1; k >= 1; k--)
    {
        sum = 0.0;
        for(j=k+1;j<=n;j++)
            sum = sum + a[k][j]*x[j];

        x[k] = (a[k][n+1] - sum)/a[k][k];
    }

    printf("\nSolution Vector X \n");
    for(i=1;i<=n;i++)
        printf("\nx%d = %f\t", i, x[i] );
    printf("\n");

    return 0;
}
