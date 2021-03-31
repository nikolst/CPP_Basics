#include<iostream>

template<typename T>
void input(T array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }
}

int main()
{
    int n = 5;
    double arr[n];
    int ar[n];
    input(arr, n);

    for(auto i : arr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}
