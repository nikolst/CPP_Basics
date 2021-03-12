#include<iostream>

int main()
{
    const int size = 12; // size is const; its value may not be changed
    std::cout << size << std::endl; // prints 12
    // const int p; - constants must be initialized

    //size = 88; - we can`t change size

    // References & const
    double dval = 3.14;
    const int &ri = dval;
    std::cout << ri << std::endl; // prints 3
    //int &r = dval;
    //std::cout << r << std::endl; // error - non-const lvalue reference to type 'int'


    // Pointers & const
    const double pi = 3.14;
    //double *ptr = &pi; - error: ptr is a plain pointer
    const double *cptr = &pi; // cptr may point to a double that is const
    //*cptr = 42; - error: cannot assign to *cptr

    // const Pointers
    int errNumb = 0;
    int *const curErr = &errNumb; // curErr will always point to errNumb
    const double pi = 3.14159;
    const double *const pip = &pi; // pip is a const pointer to a const object

    // Constant Expressions
    const int max = 20;
    const int limit = max + 1; // limit is constant expression

    return 0;
}
