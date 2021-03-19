#include<iostream>

int main()
{
    int arr[] = {1, 3, 6, 9, 2, 4};

    for (auto i : arr)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    int *p = &arr[1];
    int *t = arr + 2;
    std::cout << *p << std::endl; //3
    std::cout << *t << std::endl; //6

    *p += *t - *p;
    std::cout << *p << std::endl; //6

    int *last = std::end(arr);
    for (int *r = arr; *r != *last; r++)
    {
        *r = 0;
        std::cout << *r << " ";
    }
    
    std::cout << std::endl;

    for (auto i : arr)
    {
        std::cout << i << " ";
    }
    
    std::cout << std::endl;

    return 0;
}
