#include<iostream>
#include<vector>

int main()
{
    int number;
    std::vector<int> v;
    std::vector<int> sumV1; //sumV1 safe the sum of each pair of adjacent elements from v
    std::vector<int> sumV2; //sumV2 safe the sum of the first and last elements, and so on...

    //input numbers from the keyboard until entering the end-of-file command
    while (std::cin >> number)
    {
        v.push_back(number);
    }

    //output the elements of the vector v
    for (auto i : v)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    //initialize the sumV1 vector
    for (int i = 0; i < v.size(); i++)
    {
        if (i == 0 || i % 2 == 0) sumV1.push_back(v[i] + v[i + 1]);
    }

    //output the sumV1 vector elements
    for (auto i : sumV1)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    //initialize the sumV2 vector
    for (int i = 0; i < v.size() / 2; i++)
    {
        sumV2.push_back(v[i] + v[v.size() - i - 1]);
    }

    //check if the length of the sumV2 is odd number and if true print the middle element at the end
    if (v.size() % 2 != 0) sumV2.push_back(v[v.size() / 2]);

    //output the sumV2 vector elements
    for (auto i : sumV2)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    return 0;
}
