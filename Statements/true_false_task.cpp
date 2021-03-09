/*Да се напише булев израз, който има стойност true, ако посоченото условие е в сила, 
и стойност false, ако условието не е в сила:
 а) поне едно от числата x, y, z е положително
 б) точката x принадлежи на отсечката [2,6]
 в) точката y не принадлежи на отсечката [-4,-2]. */

#include<iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter z: ";
    cin >> z;
// a)
    if(x > 0 || y > 0 || z > 0)
    {
         cout << true << endl;
    } else {
        cout << false << endl;
    }

// b)
    if(x >= 2 && x <= 6)
    {
        cout << true << endl;
    } else {
        cout << false << endl;
    }

// c)
    if(y >= -4 && y <= -2)
    {
        cout << false << endl;
    } else {
        cout << true << endl;
    }
    
    return 0;
}
