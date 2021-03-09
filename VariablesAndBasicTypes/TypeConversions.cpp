#include<iostream>

int main()
{
    bool b1 = true;
    bool b2 = 45;
    bool b3 = -2;
    bool b4 = false;
    int k = b2;
    std::cout << b1 << std::endl; //prints 1
    std::cout << b2 << std::endl; // prints 1
    std::cout << b3 << std::endl; // prints 1
    std::cout << b4 << std::endl; // prints 0
    std::cout << k << std::endl; // prints 1
    k = b4;
    std::cout << k << std::endl; // prints 0
    int p = 3.74;
    std::cout << p << std::endl; // prints 3
    unsigned int uc = 3;
    std::cout << uc << std::endl; //prints 3
    uc = -1;
    std::cout << uc << std::endl; // prints 4294967295

    std::cout << "-----" << std::endl;
    unsigned u = 10, u2 = 42;
    int i = 10, i2 = 42;
    std::cout << u2 - u << std::endl; // prints 32
    std::cout << u - u2 << std::endl; // prints 4294967295
    std::cout << i2 - i << std::endl; // prints 32
    std::cout << i - i2 << std::endl; // prints -32
    std::cout << i - u << std::endl; // prints 0
    std::cout << u - i << std::endl; // prints 0
    return 0;
}
