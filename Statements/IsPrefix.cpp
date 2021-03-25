#include <iostream>
#include <vector>

//method to check the indexes of two vectors
bool compareVectors(std::vector<int> a, std::vector<int> b)
{
    bool flag;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i])
        {
            flag = true;
        }
        else
        {
            flag = false;
        }
    }
    return flag;
}

int main()
{
    std::vector<int> v1 = {1, 2, 3, 6, 7, 8};
    std::vector<int> v2 = {1, 2, 3, 6, 7};

    //calling the method with parameters depends on the sizes of the vectors
    if (v1.size() < v2.size())
    {
        std::cout << compareVectors(v1, v2) << std::endl;
    }
    else
    {
        std::cout << compareVectors(v2, v1) << std::endl;
    }

    return 0;
}
