#include <iostream>

int main()
{
    std::string s1, s2;
    std::cout << "Enter the first string:" << std::endl;
    std::getline(std::cin, s1);
    std::cout << "Enter the second string:" << std::endl;
    std::getline(std::cin, s2);

    if (s1 == s2)
    {
        std::cout << "s1 is equal to s2" << std::endl;
    }
    else if (s1 > s2)
    {
        std::cout << "s1 is larger than s2" << std::endl;
    }
    else
    {
        std::cout << "s2 is larger than s1" << std::endl;
    }


    if (s1.size() == s2.size())
    {
        std::cout << "s1 has the same length as s2" << std::endl;
    }
    else if (s1.size() > s2.size())
    {
        std::cout << "s1 is longer than s2" << std::endl;
    }
    else
    {
        std::cout << "s2 is longer than s1" << std::endl;
    }
    return 0;
}
