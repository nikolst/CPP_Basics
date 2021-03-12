#include<iostream>

int main()
{
    int i = 0, &r = i;
    auto a = r;
    std::cout << i << " " << r << std::endl; // prints 0 0
    std::cout << a << std::endl; // prints 0
    a = 42;
    std::cout << a << std::endl; // prints 42

    const int ci = i, &cr = ci;
    auto b = ci;
    std::cout << b << std::endl; // prints 0
    b = 42;
    std::cout << b << std::endl; // prints 42

    auto c = cr;
    std::cout << cr << std::endl; // prints 0
    c = 42;
    std::cout << c << std::endl; // prints 42

    auto d = &i;
    std::cout << d << std::endl; // prints 0x7ffeef657808
    //d = 42;
    //std::cout << d << std::endl; ----> error: assigning to 'int *' from incompatible type 'int'

    auto e = &ci;
    std::cout << ci << std::endl; // prints 0
    //e = 42;
    //std::cout << e << std::endl; ----> error: assigning to 'int *' from incompatible type 'int'

    const auto f = ci;

    auto &g = ci;
    std::cout << g << std::endl; // prints 0
    //g = 42;
    //std::cout << g << std::endl; ----> variable 'g' declared const here

    return 0;
}
