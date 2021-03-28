#include<iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    if (b == 0) throw std::invalid_argument("The second number cannot be zero!");

    std::cout << a / b << std::endl;
    return 0;
}
