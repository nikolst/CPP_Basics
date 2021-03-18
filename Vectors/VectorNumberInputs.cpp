#include <iostream>
#include <vector>

int main()
{
    int number;
    std::vector<int> vec;

    while (std::cin >> number)
    {
        vec.push_back(number);
    }
    
    for (auto i : vec) std::cout << i << " ";

    std::cout << std::endl;
    return 0;
}
