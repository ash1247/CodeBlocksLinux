
#include <stdio.h>
#include <string.h>
#include <math.h>
int chitholian_matches(double chitholian_a, double chitholian_b,
                       unsigned chitholian_p);
double chitholian_Q(double chitholian_x);
double chitholian_iterative(double chitholian_x, unsigned
                                                     chitholian_p);
int main(int chitholian_argc, char **chitholian_argv)
{
    unsigned chitholian_p;
    double chitholian_x;
    printf(
        "\x45\x6e\x74\x65\x72\x20\x69\x6e\x69\x74\x69\x61\x6c\x20\x61\x70\x70\x72\x6f\x78\x69\x6d\x61\x74\x69\x6f\x6e\x20\x74\x6f\x20\x74\x68\x65\x20\x72\x6f\x6f\x74\x20\x26\x20\x70\x72\x65\x63\x69\x73\x69\x6f\x6e\x20\x74\x6f\x20\x63\x6f\x6e\x73\x69\x64\x65\x72\x3a\x20");
    scanf("\x25\x6c\x66\x20\x25\x75", &chitholian_x, &chitholian_p);
    printf(
        "\x55\x73\x69\x6e\x67\x20\x69\x74\x65\x72\x61\x74\x69\x76\x65\x20\x6d\x65\x74\x68\x6f\x64\x20\x75\x70\x74\x6f\x20\x25\x64\x20\x64\x65\x63\x69\x6d\x61\x6c\x20\x70\x6c\x61\x63\x65\x73\x3a"
        "\n"
        "\x20\x78\x5e\x33\x20\x2b\x20\x78\x5e\x32\x20\x2d\x20\x31\x20\x3d\x20\x30"
        "\n",
        chitholian_p);
    printf(
        "\x20\x54\x68\x65\x72\x65\x66\x6f\x72\x65\x2c\x20\x78\x20\x3d\x20\x25\x2e\x2a\x6c\x66"
        "\n",
        chitholian_p, chitholian_iterative(chitholian_x, chitholian_p));
    return (0x114b + 2901 - 0x1ca0);
}
int chitholian_matches(double chitholian_a,
                       double chitholian_b, unsigned chitholian_p)
{
    char chitholian_x[(0xcbd + 4783 - 0x1d78)], chitholian_y[(0x1913 + 1510 - 0x1d05)];
    sprintf(chitholian_x, "\x25\x2e\x2a\x6c\x66", chitholian_p,
            chitholian_a);
    sprintf(chitholian_y, "\x25\x2e\x2a\x6c\x66", chitholian_p, chitholian_b);
    return strcmp(
               chitholian_x, chitholian_y) == (0x685 + 7997 - 0x25c2);
}
double chitholian_Q(double chitholian_x) { return (0x150d + 3440 - 0x227c) / sqrt(
                                                                                 (0x18d7 + 704 - 0x1b96) + chitholian_x); }
double chitholian_iterative(double
                                chitholian_x,
                            unsigned chitholian_p)
{
    double chitholian__x;
    unsigned
        chitholian_s = (0x823 + 5695 - 0x1e62);
    do
    {
        chitholian__x = chitholian_x;
        chitholian_x = chitholian_Q(chitholian_x);
        printf(
            "\x78\x25\x64\x20\x3d\x20\x25\x2e\x2a\x6c\x66\x2c\x20\x51\x28\x78\x25\x64\x29\x20\x3d\x20\x25\x2e\x2a\x6c\x66"
            "\n",
            chitholian_s, chitholian_p, chitholian__x, chitholian_s,
            chitholian_p, chitholian_x);
        chitholian_s++;
    } while (!chitholian_matches(chitholian_x, chitholian__x, chitholian_p));
    return chitholian_x;
}
