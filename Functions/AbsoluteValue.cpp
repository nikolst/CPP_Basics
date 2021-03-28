#include<iostream>

int absVal(int x)
{
    return abs(x);
}

int main()
{
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << absVal(number) << std::endl;

    return 0;
}
