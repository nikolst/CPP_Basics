#include<iostream>

int main()
{
    int myVal = 1024;
    std::cout << myVal << std::endl; // prints 1024
    int &refVal = myVal;
    std::cout << refVal << std::endl; // prints 1024
    refVal = 7;
    std::cout << refVal << std::endl; // prints 7
    std::cout << myVal << std::endl; // prints 7

    int newVal = refVal;
    std::cout << newVal << std::endl; // prints 7
    newVal = 19;
    std::cout << refVal << std::endl; // prints 7
    std::cout << newVal << std::endl; // prints 19

    std::cout << "-----------" << std::endl;
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;
    r2 = 3.1456;
    std::cout << d << std::endl; // prints 3.1456
    r2 = r1;
    std::cout << r2 << std::endl; // prints 0
    i = r2;
    std::cout << i << std::endl; // prints 0
    r1 = d;
    std::cout << r1 << std::endl; // prints 0

    std::cout << "----------" << std::endl;
    int m, &rm = m;
    std::cout << rm << std::endl; // prints 0
    std::cout << m << std::endl; // prints 0
    m = 5, rm = 10;
    std::cout << m << std::endl; // prints 10
    std::cout << rm << std::endl; // prints 10
    m = 8;
    std::cout << m << std::endl; // prints 8
    std::cout << rm << std::endl; // prints 8

    return 0;
}
