#include <iostream>

int main()
{
    std::string s;
    std::cout << "Enter your string: ";
    std::getline(std::cin, s);
    std::cout << s << std::endl;
    
    for (decltype(s.size()) index = 0; index != s.size(); ++index)
    {
        if (!isspace(s[index]))
        {
            s[index] = 'X';
        }
        std::cout << s[index];
    }

    std::cout << std::endl;
    return 0;
}
