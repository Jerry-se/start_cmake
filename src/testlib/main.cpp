#include <iostream>
#include "../static_lib/public.h"

int main(int argc, char* argv[])
{
    std::cout << "Hello World" << std::endl;
    std::cout << "static lib Add(1,2) = " << Add(1,2) << std::endl;
    return 0;
}