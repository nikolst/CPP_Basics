#include<iostream>

void swap(int x, int y)
{
    int temp;
    int *p = &y; 
    int *q = &x;
    
    temp = *p;
    *p = *q;
    *q = temp;

    std::cout << x << " " << y << std::endl;
}

int main()
{
    int n1, n2;
    std::cout << "Enter two numbers: ";
    std::cin >> n1 >> n2;

    swap(n1, n2);
    return 0;
}
