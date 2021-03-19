#include<iostream>
#include<vector>

int main()
{
    int number;
    std::vector<int> vn;

    //input 10 numbers and initialize the vector vn with them
    while(vn.size() < 10)
    {
        std::cin >> number;
        vn.push_back(number);
    }

    //output the vn
    for (auto n : vn)
    {
        std::cout << n << " ";
    }

    std::cout << std::endl;

    //multiply each number from vn with 2 and output the result
    for (auto it = vn.begin(); it != vn.end(); ++it)
    {
        std::cout << (*it) * 2 << " ";
    }

    std::cout << std::endl;

    return 0;
}
