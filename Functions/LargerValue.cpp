#include<iostream>

int largerNum(int n, int *p)
{
    if (n > *p) return n;
    return *p;
}

int main()
{
    int num, j;
    int *pr = &j;
    std::cout << "Enter two numbers:\n";
    std::cin >> num >> j;

    std::cout << largerNum(num, pr) << std::endl;

    return 0;
}
