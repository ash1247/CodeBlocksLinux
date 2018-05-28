#include <math.h>
#include <iostream>

struct point{
    float x;
    float y;
};

float distance(point a, point b)
{
    float dx = a.x - b.x;
    float dy = a.y - b.y;
    return sqrt(dx*dx + dy*dy);
}

void polar(point a, float *r, float *theta)
{
    *r = sqrt(a.x*a.x + a.y*a.y);
    *theta = atan2(a.y, a.x);
}

int main()
{
    point a;
    point b;
    float r;
    float theta;
    std::cin >> a.x >> a.y >> b.x >> b.y;
    polar(a, &r, &theta);
    std::cout << distance(a, b) << std::endl;
    std::cout << r << " " << theta << std::endl;
}
