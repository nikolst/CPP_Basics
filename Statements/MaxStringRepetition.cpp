#include<iostream>
#include<vector>

int main()
{
    std::string s; //string form input
    std::string sRepetition; //string that is reapeating
    std::vector<std::string> vs; //vector which holds all string inputs 
    int counter = 1, max = 1; // counter and max hold the string occurances and their max duplicates

    //input strings and hold them in the vector vs
    while (std::cin >> s)
    {
        vs.push_back(s);
    }

    //check the strings occurances
    for (int i = 1; i != vs.size(); ++i)
    {
        if (vs[i] == vs[i - 1])
        {
            ++counter;
            if (counter >= max)
            {
                max = counter;
                sRepetition = vs[i];
            }  
        } else {
            counter = 1;
        }
    }

    //output the answer 
    if (counter != 1)
    {
        std::cout << sRepetition << " " << max << std::endl;
    } else {
        std::cout << "There are no duplicate strings" << std::endl;
    }
    
    return 0;
}
