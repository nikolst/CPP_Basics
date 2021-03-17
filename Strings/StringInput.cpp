#include <iostream>

int main()
{
    /*
    std::string str1;
    std::cout << "Enter your string: " << std::endl;
    std::cin >> str1; //if the string is "Hello World!"
    std::cout << str1 << std::endl; //the output is going to be "Hello"
    */
  
    std::string str2;
    std::cout << "Enter your string: " << std::endl;
    std::getline(std::cin, str2); //if the string is "Hello World!"
    std::cout << str2 << std::endl; //the output is going to be "Hello World!"
    return 0;
}
