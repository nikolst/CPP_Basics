#include<iostream>

bool capitalLetters(const std::string &s)
{
    for (int i = 0; i != s.size(); i++)
    {
        char ch = s[i];
        if (ch >= 65 && ch <= 90) return true;
    }
    return false;
}

std::string toLow(std::string ss)
{
    for (int i = 0; i != ss.size(); i++)
    {
        char c = ss[i];
        if (c >= 65 && c <= 90) ss[i] = tolower(c);
    }
    return ss;
}

int main()
{
    std::string str;
    std::cout << "Enter your string:\n";
    getline(std::cin, str);

    std::cout << capitalLetters(str) << std::endl;

    std::cout << toLow(str) << std::endl;

    return 0;
}
