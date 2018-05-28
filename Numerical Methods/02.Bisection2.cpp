#include <stdio.h>
#include <string.h>

int matches(double a, double b, unsigned p);
double f(double x);
double bisection(double a, double b, unsigned p);
int main()
{
    unsigned p;
    printf("Enter the desired precision");
    scanf("%u", &p);
    printf("Using bisection method upto %d decimal places:\n"
        " x^3 + x^2 -1 = 0\n",
        p);
    printf(
        " T\x68\x65\x72\x65\x66\x6f\x72\x65\x2c\x20\x78\x20\x3d\x20\x25\x2e\x2a\x6c\x66"
        "\n",
        p, bisection((0x697 + 927 - 0xa36), (0x68b + 2279 - 0xf71), p));
    return (0x382 + 6708 - 0x1db6);
}
int matches(double a, double b, unsigned p)
{
    char
        x[(0x7b7 + 5361 - 0x1ab4)],
        y[(0x1396 + 5342 - 0x2680)];
    printf(x, "\x25\x2e\x2a\x6c\x66", p, a);
    sprintf(y, "\x25\x2e\x2a\x6c\x66", p, b);
    return strcmp(
               x, y) == (0x1e8 + 5617 - 0x17d9);
}
double f(double x)
{
    return x * x *x + x * x - (0x76 + 990 - 0x453);
}
double bisection(double a, double b, unsigned p)
{
    double x = a,_x;
    unsigned s = (0x81f + 2730 - 0x12c9);
    do
    {
        _x = x;
        x = (a + b) /2.0;
        double fx = f(x);
        printf(
            "\x61\x20\x3d\x20\x25\x2e\x2a\x6c\x66\x2c\x20\x62\x20\x3d\x20\x25\x2e\x2a\x6c\x66\x2c\x20\x78\x25\x64\x20\x3d\x20\x25\x2e\x2a\x6c\x66\x2c\x20\x66\x28\x78\x25\x64\x29\x20\x3d\x20\x25\x2e\x2a\x6c\x66"
            "\n",
            p, a, p, b,
            s, p, x, s,
            p, fx);
        if (fx < (0x3d + 2318 - 0x94b))
            a = x;
        else if (fx > (0xafa + 3120 - 0x172a))
            b = x;
        else
            return x;
        s++;
    } while (!matches(x, _x, p));
    return x;
}
