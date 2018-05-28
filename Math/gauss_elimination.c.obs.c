
#include <stdio.h>
void chitholian_gauss_elimination(int chitholian_n, double chitholian_cm[][chitholian_n], double chitholian_c[chitholian_n]);
int main(int chitholian_argc, char **chitholian_argv)
{
    int
        chitholian_v,
        chitholian_i, chitholian_j;
    printf(
        "\x45\x6e\x74\x65\x72\x20\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x3a\x20");
    scanf("\x25\x64", &chitholian_v);
    double chitholian_cm[chitholian_v][chitholian_v], chitholian_c[chitholian_v];
    printf(
        "\x45\x6e\x74\x65\x72\x20\x63\x6f\x2d\x65\x66\x66\x69\x63\x69\x65\x6e\x74\x20\x6d\x61\x74\x72\x69\x78\x20\x69\x6e\x20\x72\x6f\x77\x2d\x6d\x61\x6a\x6f\x72\x20\x6f\x72\x64\x65\x72\x3a"
        "\n");
    for (chitholian_i = (0x2353 + 344 - 0x24ab); chitholian_i < chitholian_v; ++chitholian_i)
    {
        for (chitholian_j = (0x2024 + 313 - 0x215d); chitholian_j <
                                                     chitholian_v;
             ++chitholian_j)
        {
            scanf("\x25\x6c\x66", &chitholian_cm[chitholian_i][chitholian_j]);
        }
    }
    printf(
        "\x45\x6e\x74\x65\x72\x20\x72\x69\x67\x68\x74\x2d\x73\x69\x64\x65\x20\x76\x61\x6c\x75\x65\x73\x20\x6f\x66\x20\x74\x68\x65\x20\x65\x71\x75\x61\x74\x69\x6f\x6e\x73\x3a\x20");
    for (chitholian_i = (0x174 + 5089 - 0x1555); chitholian_i < chitholian_v; ++chitholian_i)
    {
        scanf("\x25\x6c\x66", &chitholian_c[chitholian_i]);
    }
    printf(
        "\x55\x73\x69\x6e\x67\x20\x47\x61\x75\x73\x73\x2d\x45\x6c\x69\x6d\x69\x6e\x61\x74\x69\x6f\x6e\x20\x6d\x65\x74\x68\x6f\x64\x3a"
        "\n");
    chitholian_gauss_elimination(chitholian_v, chitholian_cm,
                                 chitholian_c);
    for (chitholian_i = (0x144 + 840 - 0x48c); chitholian_i <
                                               chitholian_v;
         chitholian_i++)
    {
        printf(
            "\x25\x63\x20\x3d\x20\x25\x67"
            "\n",
            ((char)(0x5f1 + 6888 - 0x205f)) - chitholian_v + chitholian_i + (0xd57 + 1997 - 0x1523), chitholian_c[chitholian_i]);
    }
    return (0x49 + 358 - 0x1af);
}
void chitholian_gauss_elimination(int
                                      chitholian_n,
                                  double chitholian_cm[][chitholian_n], double chitholian_c[chitholian_n])
{
    int chitholian_i, chitholian_j,
        chitholian_k;
    for (chitholian_k = (0x3d0 + 3589 - 0x11d5); chitholian_k <
                                                 chitholian_n - (0x1839 + 1908 - 0x1fac);
         ++chitholian_k)
    {
        for (chitholian_i =
                 chitholian_k + (0x1218 + 2877 - 0x1d54);
             chitholian_i < chitholian_n; ++chitholian_i)
        {
            double chitholian_m = chitholian_cm[chitholian_i][chitholian_k] / chitholian_cm[chitholian_k][chitholian_k];
            printf(
                "\x52\x25\x64\x20\x3d\x20\x52\x25\x64\x20\x2d\x20\x28\x25\x2e\x32\x67\x20\x52\x25\x64\x29"
                "\n",
                chitholian_i + (0xf93 + 4871 - 0x2299), chitholian_i + (0x1dc6 + 180 - 0x1e79),
                chitholian_m, chitholian_k + (0x485 + 4573 - 0x1661));
            chitholian_c[chitholian_i] -= chitholian_m * chitholian_c[chitholian_k];
            for (
                chitholian_j = (0x1b6f + 1720 - 0x2227); chitholian_j < chitholian_n; ++chitholian_j)
            {
                chitholian_cm[chitholian_i][chitholian_j] -=
                    chitholian_m * chitholian_cm[chitholian_k][chitholian_j];
            }
        }
        for (
            chitholian_i = (0x17d2 + 3206 - 0x2458); chitholian_i < chitholian_n; ++chitholian_i)
        {
            for (chitholian_j = (0x15fc + 4076 - 0x25e8); chitholian_j <
                                                          chitholian_n;
                 ++chitholian_j)
            {
                printf(
                    "\x25\x2e\x32\x67"
                    "\t",
                    chitholian_cm[chitholian_i][chitholian_j]);
            }
            printf("\x7c"
                   "\t"
                   "\x25\x2e\x32\x67"
                   "\n",
                   chitholian_c[chitholian_i]);
        }
        printf("\n");
    }
    for (chitholian_i =
             chitholian_n - (0x898 + 7390 - 0x2575);
         chitholian_i >= (0x594 + 1747 - 0xc67); --chitholian_i)
    {
        double chitholian_s = 0.0;
        for (chitholian_j =
                 chitholian_n - (0xc12 + 6164 - 0x2425);
             chitholian_j > chitholian_i; --chitholian_j)
        {
            chitholian_s += chitholian_c[chitholian_j] *
                            chitholian_cm[chitholian_i][chitholian_j];
        }
        chitholian_c[chitholian_i] = (chitholian_c[chitholian_i] - chitholian_s) /
                                     chitholian_cm[chitholian_i][chitholian_i];
    }
}
