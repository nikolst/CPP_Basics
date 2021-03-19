#include<iostream>
#include<vector>

int main()
{
    int arr[] = {9, 26, 84, 61, 7, 29};
    std::vector<int> vc;
 
    for (int i = 0; i < std::size(arr); i++)
    {
        vc.push_back(arr[i]);
    }

    //output the vector elements
    for (auto j : vc)
    {
        std::cout << j << " ";
    }

    std::cout << std::endl;
    return 0;
}
