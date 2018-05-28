#include <iostream>

//can also be written as *argv[]
int main(int argc, char **argv )
{
    int i = 1;
    for(int i = 0; i != argc; ++i)
    {
        std::cout << argv[i] << std::endl;
    }
}
