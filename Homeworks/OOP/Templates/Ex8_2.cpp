#include<iostream>

template<typename T>
void input(T array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }
}

template<typename T>
bool ordered(T array[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (array[i - 1] > array[i]) return false;
    }
    return true;
}

int main()
{
    int n = 5;
    double arr[n];
    int ar[n];
    char c[n];
    input(arr, n);

    for(auto i : arr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::cout << ordered(arr, n) << std::endl;

    return 0;
}
