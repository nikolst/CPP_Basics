#include <iostream>
#include <vector>

int main()
{
    std::string str;
    std::vector<std::string> vs;
    int counter = 1; //count the word repetitions

    //we input words while they are different or we don`t stop the process 
    while (std::cin >> str && !str.empty())
    {
        for (int i = 0; i != vs.size(); i++)
        {
            if (str == vs[i]) ++counter;
        }
        if (counter == 2) break;
        vs.push_back(str);
    }

    //output the appropriate message
    if (counter == 2)
    {
        std::cout << "The word " << str << " is repeated" << std::endl;
    }
    else
    {
        std::cout << "No word was repeated" << std::endl;
    }

    return 0;
}
