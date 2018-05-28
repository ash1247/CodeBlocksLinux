
#include <stdio.h>
#include <string.h>
int chitholian_matches(double chitholian_a, double chitholian_b,
                       unsigned chitholian_p);
double chitholian_f(double chitholian_x);
double chitholian_bisection(double chitholian_a, double chitholian_b,
                            unsigned chitholian_p);
int main(int chitholian_argc, char **
                                  chitholian_argv)
{
    unsigned chitholian_p;
    printf("Enter the desired precision");
    scanf("%u", &chitholian_p);
    printf("Using bisection method upto %d decimal places:\n"
        " x^3 + x^2 -1 = 0\n",
        chitholian_p);
    printf(
        " T\x68\x65\x72\x65\x66\x6f\x72\x65\x2c\x20\x78\x20\x3d\x20\x25\x2e\x2a\x6c\x66"
        "\n",
        chitholian_p, chitholian_bisection((0x697 + 927 - 0xa36), (0x68b + 2279 - 0xf71), chitholian_p));
    return (0x382 + 6708 - 0x1db6);
}
int chitholian_matches(double
                           chitholian_a,
                       double chitholian_b, unsigned chitholian_p)
{
    char
        chitholian_x[(0x7b7 + 5361 - 0x1ab4)],
        chitholian_y[(0x1396 + 5342 - 0x2680)];
    sprintf(chitholian_x, "\x25\x2e\x2a\x6c\x66", chitholian_p,
            chitholian_a);
    sprintf(chitholian_y, "\x25\x2e\x2a\x6c\x66", chitholian_p, chitholian_b);
    return strcmp(
               chitholian_x, chitholian_y) == (0x1e8 + 5617 - 0x17d9);
}
double chitholian_f(double chitholian_x) { return chitholian_x * chitholian_x *
                                                      chitholian_x +
                                                  chitholian_x * chitholian_x - (0x76 + 990 - 0x453); }
double
chitholian_bisection(double chitholian_a, double chitholian_b,
                     unsigned chitholian_p)
{
    double chitholian_x = chitholian_a,
           chitholian__x;
    unsigned chitholian_s = (0x81f + 2730 - 0x12c9);
    do
    {
        chitholian__x = chitholian_x;
        chitholian_x = (chitholian_a +
                        chitholian_b) /
                       2.0;
        double chitholian_fx = chitholian_f(chitholian_x);
        printf(
            "\x61\x20\x3d\x20\x25\x2e\x2a\x6c\x66\x2c\x20\x62\x20\x3d\x20\x25\x2e\x2a\x6c\x66\x2c\x20\x78\x25\x64\x20\x3d\x20\x25\x2e\x2a\x6c\x66\x2c\x20\x66\x28\x78\x25\x64\x29\x20\x3d\x20\x25\x2e\x2a\x6c\x66"
            "\n",
            chitholian_p, chitholian_a, chitholian_p, chitholian_b,
            chitholian_s, chitholian_p, chitholian_x, chitholian_s,
            chitholian_p, chitholian_fx);
        if (chitholian_fx < (0x3d + 2318 - 0x94b))
            chitholian_a = chitholian_x;
        else if (chitholian_fx > (0xafa + 3120 - 0x172a))
            chitholian_b = chitholian_x;
        else
            return chitholian_x;
        chitholian_s++;
    } while (!chitholian_matches(chitholian_x, chitholian__x,
                                 chitholian_p));
    return chitholian_x;
}
