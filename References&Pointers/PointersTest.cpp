#include<iostream>

int main()
{
    int val = 7;
    int *pval = &val;
    std::cout << val << std::endl; // print 7
    std::cout<< pval << std::endl; // print 0x7ffee8338818

    // NULL Pointers
    int *p1 = nullptr;
    std::cout << p1 << std::endl; // print 0x0

    int *p2 = 0;
    std::cout << p2 << std::endl; // print 0x0

    // Write code to change the value of a pointer
    int t1 = 45;
    int *t = &t1;
    *t = 67;
    std::cout << *t << std::endl; // prints 67
    std:: cout << t1 << std::endl; // prints 67

    // Write code to change the value to which the pointer points
    t1 = 22;
    std::cout << t1 << std::endl; // prints 22
    std::cout << *t << std::endl; // prints 22

    t1 = 45;
    *t = *t * *t;
    std::cout << *t << std::endl; // prints 2025

    return 0;
}
