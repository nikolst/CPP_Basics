#include<iostream>
#include<cmath>

struct Triangle
{
    double a, b, c;
};

void createTriangle(Triangle& t)
{
    std::cout << "Enter the side a: ";
    std::cin>> t.a;
    std::cout << "Enter the side b: ";
    std::cin >> t.b;
    std::cout << "Enter the side c: ";
    std::cin >> t.c;
}

void outputTriangle(Triangle& t)
{
    if ((t.a > 0) && (t.b > 0) && (t.c > 0) && (t.a + t.b > t.c) && (t.b + t.c > t.a) && (t.a + t.c > t.b))
    {
        std::cout << "a = " << t.a << ", b = " << t.b << ", c = " << t.c << std::endl;
    }
}

//find the perimeter of the triangle
double perimeter(Triangle& t)
{
    return t.a + t.b + t.c;
}

//find the surface of the triangle
double surface(Triangle& t)
{
    double p2 = perimeter(t) / 2;
    return sqrt(p2 * (p2 - t.a) * (p2 - t.b) * (p2 - t.c));
}

int main()
{
    Triangle t;
    createTriangle(t);
    outputTriangle(t);
    std::cout << "The perimeter is equal to " << perimeter(t) << std::endl;
    std::cout << "The surface of the triangle is equal to " << surface(t) << std::endl; 
    return 0;
}
