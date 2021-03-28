#include<iostream>

int factorial()
{
    int num, result = 1;
    std::cout << "Enter a number: ";
    std::cin >> num;

    for (int i = num; i > 0; i--)
    {
        result = result * i;
    }

    return result;
}

int main()
{
    std::cout << factorial() << std::endl;
    return 0;
}
