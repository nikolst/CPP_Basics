#include<iostream>
#include<vector>

int main()
{
    std::vector<int> vc = {2, 5, 7, 8, 4, 3, 9, 6};

    for (int i = 0; i < vc.size(); i++)
    {
        std::cout << ((vc[i] % 2 != 0) ? vc[i] * 2 : vc[i]) << " ";
    }

    std::cout << std::endl;

    return 0;
}
