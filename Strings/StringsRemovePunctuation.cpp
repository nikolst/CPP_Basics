#include <iostream>

int main()
{
    std::string str;
    std::cout << "Enter your string: ";
    std::getline(std::cin, str);

    for (decltype(str.size()) index = 0; index != str.size(); ++index)
    {
        //we check if the char is punctuation char with the method ispunct
        if (!ispunct(str[index])) std::cout << str[index];
    }

    std::cout << std::endl;
    return 0;
}
