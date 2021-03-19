#include<iostream>

int main()
{
    int arr[10], arr2[10];

    for (int i = 0; i < std::size(arr); i++)
    {
        arr[i] = i;
    }

    //assign the elements from arr to arr2 and print each arr2 element
    for (auto i : arr)
    {
        arr2[i] = arr[i];
        std::cout << arr2[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}
