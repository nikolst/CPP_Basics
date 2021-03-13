#include<iostream>
#include<iomanip>

// define the Product Data Structure
struct Product {
    char description[32];
    int partNum;
    double cost;
};

int main()
{
    // create two objects
    Product pr1 = {"screw-driver", 456, 5.50};
    Product pr2 = {"hammer", 324, 8.20};

    // print the objects pr1 and pr2
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2);
    std::cout << std::setw(35) <<pr1.description 
              << std::setw(15) << pr1.partNum 
              << std::setw(20) << pr1.cost << std::endl;
    std::cout << std::setw(35) << pr2.description 
              << std::setw(15) << pr2.partNum 
              << std::setw(20) << pr2.cost << std::endl;

    // create and initialize 10 objects with deafult values
    Product p[10];

    for (int i = 0; i < 10; i++) 
    {
        strcpy(p[i].description, "---");
        p[i].partNum = 0;
        p[i].cost = 0.0;
    }

    for (int i = 0; i < 10; i++)
    {
        std::cout << std::setw(35) << p[i].description 
                  << std::setw(15) << p[i].partNum 
                  << std::setw(20) << p[i].cost << std::endl;
    }

    // create and initialize 5 objects
    Product pd[5] = { {"screw-driver", 456, 5.50}, {"hammer", 324, 8.20},
        {"socket", 458, 5.75}, {"plier", 929, 10.50}, {"hand-saw", 536, 7.45} };

    // print the objects
    for (int i = 0; i < 5; i++)
    {
        std::cout << std::setw(35) << pd[i].description 
                  << std::setw(15) << pd[i].partNum 
                  << std::setw(20) << pd[i].cost << std::endl;
    }

    return 0;
}
