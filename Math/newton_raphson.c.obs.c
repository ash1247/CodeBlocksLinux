
#include <stdio.h>
#include <string.h>
int chitholian_matches(double chitholian_a, double chitholian_b,
                       unsigned chitholian_p);
double chitholian_f(double chitholian_x);
double chitholian_f_(double chitholian_x);
double
chitholian_newton_raphson(double chitholian_x, unsigned chitholian_p);
int main(int chitholian_argc, char **chitholian_argv)
{
    unsigned
        chitholian_p;
    double chitholian_x;
    printf(
        "\x45\x6e\x74\x65\x72\x20\x69\x6e\x69\x74\x69\x61\x6c\x20\x61\x70\x70\x72\x6f\x78\x69\x6d\x61\x74\x69\x6f\x6e\x20\x74\x6f\x20\x74\x68\x65\x20\x72\x6f\x6f\x74\x20\x26\x20\x70\x72\x65\x63\x69\x73\x69\x6f\x6e\x20\x74\x6f\x20\x63\x6f\x6e\x73\x69\x64\x65\x72\x3a\x20");
    scanf("\x25\x6c\x66\x20\x25\x75", &chitholian_x, &chitholian_p);
    printf(
        "\x55\x73\x69\x6e\x67\x20\x4e\x65\x77\x74\x6f\x6e\x2d\x52\x61\x70\x68\x73\x6f\x6e\x20\x6d\x65\x74\x68\x6f\x64\x20\x75\x70\x74\x6f\x20\x25\x64\x20\x64\x65\x63\x69\x6d\x61\x6c\x20\x70\x6c\x61\x63\x65\x73\x3a"
        "\n"
        "\x20\x78\x5e\x33\x20\x2b\x20\x78\x5e\x32\x20\x2d\x20\x31\x20\x3d\x20\x30"
        "\n",
        chitholian_p);
    printf(
        "\x20\x54\x68\x65\x72\x65\x66\x6f\x72\x65\x2c\x20\x78\x20\x3d\x20\x25\x2e\x2a\x6c\x66"
        "\n",
        chitholian_p, chitholian_newton_raphson(chitholian_x, chitholian_p));
    return (0xb33 + 4339 - 0x1c26);
}
int chitholian_matches(double
                           chitholian_a,
                       double chitholian_b, unsigned chitholian_p)
{
    char
        chitholian_x[(0x857 + 8266 - 0x26ad)],
        chitholian_y[(0x1c92 + 1924 - 0x2222)];
    sprintf(chitholian_x, "\x25\x2e\x2a\x6c\x66", chitholian_p,
            chitholian_a);
    sprintf(chitholian_y, "\x25\x2e\x2a\x6c\x66", chitholian_p, chitholian_b);
    return strcmp(
               chitholian_x, chitholian_y) == (0xbf9 + 3058 - 0x17eb);
}
double chitholian_f(double chitholian_x) { return chitholian_x * chitholian_x *
                                                      chitholian_x +
                                                  chitholian_x * chitholian_x - (0xa73 + 7297 - 0x26f3); }
double
chitholian_f_(double chitholian_x) { return (0x1724 + 488 - 0x1909) *
                                                chitholian_x * chitholian_x +
                                            (0x18b + 2810 - 0xc83) * chitholian_x; }
double
chitholian_newton_raphson(double chitholian_x, unsigned chitholian_p)
{
    double chitholian_x_;
    unsigned chitholian_s = (0xfeb + 4943 - 0x233a);
    do
    {
        chitholian_x_ = chitholian_x;
        double chitholian_fx = chitholian_f(
                   chitholian_x),
               chitholian_f_x = chitholian_f_(chitholian_x);
        chitholian_x -= chitholian_fx / chitholian_f_x;
        printf(
            "\x78\x25\x64\x20\x3d\x20\x25\x2e\x2a\x6c\x66\x2c\x20\x66\x28\x78\x25\x64\x29\x20\x3d\x20\x25\x2e\x2a\x6c\x66\x2c\x20\x66\x27\x28\x78\x25\x64\x29\x20\x3d\x20\x25\x2e\x2a\x6c\x66"
            "\n",
            chitholian_s, chitholian_p, chitholian_x_, chitholian_s,
            chitholian_p, chitholian_fx, chitholian_s, chitholian_p,
            chitholian_f_x);
        chitholian_s++;
    } while (!chitholian_matches(
        chitholian_x, chitholian_x_, chitholian_p));
    printf(
        "\x78\x25\x64\x20\x3d\x20\x25\x2e\x2a\x6c\x66"
        "\n",
        chitholian_s,
        chitholian_p, chitholian_x);
    return chitholian_x;
}
