#include <iostream>

int main()
{
    std::string s1;
    std::string s2;

    do
    {
        std::cout << "Enter two strings: ";
        std::cin >> s1 >> s2;

        if (s1.size() > s2.size())
        {
            std::cout << s2 << " is less than " << s1 << std::endl;
        }
        else
        {
            std::cout << s1 << " is less than " << s2 << std::endl;
        }
    } while (!s1.empty() && !s2.empty());

    return 0;
}
