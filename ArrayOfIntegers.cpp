#include<iostream>

int main()
{
    int arr[10];

    for (int i = 0; i < std::size(arr); i++)
    {
        arr[i] = i;
    }

    //output the elements of the arr
    for (auto i : arr)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;
    return 0;
}
