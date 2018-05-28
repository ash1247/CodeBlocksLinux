
#include <stdio.h>
#include <string.h>
int chitholian_matches(double chitholian_a, double chitholian_b[],
                       unsigned chitholian_upto, unsigned chitholian_p);
double chitholian_f(
    double chitholian_x);
double chitholian_false_position(double
                                     chitholian_a,
                                 double chitholian_b, unsigned chitholian_p);
int main(int
             chitholian_argc,
         char **chitholian_argv)
{
    unsigned chitholian_p;
    printf(
        "\x45\x6e\x74\x65\x72\x20\x70\x72\x65\x63\x69\x73\x69\x6f\x6e\x20\x74\x6f\x20\x63\x6f\x6e\x73\x69\x64\x65\x72\x3a\x20");
    scanf("\x25\x75", &chitholian_p);
    printf(
        "\x55\x73\x69\x6e\x67\x20\x66\x61\x6c\x73\x65\x2d\x70\x6f\x73\x69\x74\x69\x6f\x6e\x20\x6d\x65\x74\x68\x6f\x64\x20\x75\x70\x74\x6f\x20\x25\x64\x20\x64\x65\x63\x69\x6d\x61\x6c\x20\x70\x6c\x61\x63\x65\x73\x3a"
        "\n"
        "\x20\x78\x5e\x33\x20\x2b\x20\x78\x5e\x32\x20\x2d\x20\x31\x20\x3d\x20\x30"
        "\n",
        chitholian_p);
    printf(
        "\x20\x54\x68\x65\x72\x65\x66\x6f\x72\x65\x2c\x20\x78\x20\x3d\x20\x25\x2e\x2a\x6c\x66"
        "\n",
        chitholian_p, chitholian_false_position((0xc6b + 356 - 0xdcf), (0x926 + 2675 - 0x1398), chitholian_p));
    return (0x2b4 + 322 - 0x3f6);
}
int chitholian_matches(double chitholian_a, double chitholian_b[],
                       unsigned chitholian_upto, unsigned chitholian_p)
{
    char chitholian_x[(0xccd + 704 - 0xd99)], chitholian_y[(0x29f + 6012 - 0x1827)];
    unsigned
        chitholian_i = (0x4e4 + 5440 - 0x1a24);
    sprintf(chitholian_x,
            "\x25\x2e\x2a\x6c\x66", chitholian_p, chitholian_a);
    for (chitholian_i =
             (0xa82 + 876 - 0xdee);
         chitholian_i <= chitholian_upto; ++chitholian_i)
    {
        sprintf(chitholian_y, "\x25\x2e\x2a\x6c\x66", chitholian_p,
                chitholian_b[chitholian_i]);
        if (strcmp(chitholian_x,
                   chitholian_y) == (0x6ef + 1742 - 0xdbd))
            return (0xcf0 + 2389 - 0x1644);
    }
    return (0xc11 + 2055 - 0x1418);
}
double chitholian_f(double chitholian_x) { return chitholian_x * chitholian_x * chitholian_x + chitholian_x * chitholian_x - (0x18f9 + 23 - 0x190f); }
double chitholian_false_position(double
                                     chitholian_a,
                                 double chitholian_b, unsigned chitholian_p)
{
    double
        chitholian_x = chitholian_a,
        chitholian__x[(0x1f96 + 152 - 0x1e3a)],
        chitholian_fa, chitholian_fb;
    unsigned chitholian_s =
        (0x1122 + 3899 - 0x205d);
    do
    {
        chitholian__x[chitholian_s] = chitholian_x;
        chitholian_fa = chitholian_f(chitholian_a);
        chitholian_fb =
            chitholian_f(chitholian_b);
        chitholian_x = (chitholian_a *
                            chitholian_fb -
                        chitholian_b * chitholian_fa) /
                       (chitholian_fb -
                        chitholian_fa);
        double chitholian_fx = chitholian_f(chitholian_x);
        printf(
            "\x61\x20\x3d\x20\x25\x2e\x2a\x6c\x66\x2c\x20\x62\x20\x3d\x20\x25\x2e\x2a\x6c\x66\x2c\x20\x78\x25\x64\x20\x3d\x20\x25\x2e\x2a\x6c\x66\x2c\x20\x66\x28\x78\x25\x64\x29\x20\x3d\x20\x25\x2e\x2a\x6c\x66"
            "\n",
            chitholian_p, chitholian_a, chitholian_p, chitholian_b,
            chitholian_s, chitholian_p, chitholian_x, chitholian_s,
            chitholian_p, chitholian_fx);
        if (chitholian_fx < (0x52a + 143 - 0x5b9))
            chitholian_a = chitholian_x;
        else if (chitholian_fx > (0x390 + 8493 - 0x24bd))
            chitholian_b = chitholian_x;
        else
            return chitholian_x;
    } while (!chitholian_matches(chitholian_x, chitholian__x, chitholian_s++,
                                 chitholian_p));
    return chitholian_x;
}
