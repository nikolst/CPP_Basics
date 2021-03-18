#include<iostream>
#include<vector>

int main()
{
    std::string word;

    std::vector<std::string> sv;

    /* enter words until entering the end of file from the keyboard;
    make each word uppercase and push it to the end of the vector */
    while (std::cin >> word)
    {
        for (auto &c : word)
        c = toupper(c);
        sv.push_back(word);
    }

    /*print the vector, using count to check if the number of words reached 8 and if true, 
    start printing on new line 
    ** End-of-file on Windows systems: control-z
       End-of-file on UNIX systems (including Mac OS): control-d */
    int count = 0;
    for (auto i : sv)
    {
        count++;
        if (count == 9) std::cout << std::endl;
        std::cout << i << " ";
    }

    std::cout << std::endl;
    return 0;
}
