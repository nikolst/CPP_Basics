/*Да се състави програма, която въвежда от клавиатурата цяло положително петцифрено
число. Програмата да извежда:
а) броя на нечетните цифри на числото;
б) сумата на четните цифри на числото.*/

#include<iostream>
using namespace std;
int main()
{
    int x;
    int counter = 0; //брояч на нечетните цифри с първоначална стойност 0
    int sum = 0; //сумата на четните цифри с начална стойност 0
    cout << "Enter 5-digit integer: ";
    cin >> x;

    int x1, x2, x3, x4, x5; //цифрите на петцифреното число x
    x1 = x % 10;
    cout << x1 << endl;
    x2 = (x / 10) % 10;
    cout << x2 << endl;
    x3 = (x / 100) % 10;
    cout << x3 << endl;
    x4 = (x / 1000) % 10;
    cout << x4 << endl;
    x5 = (x / 10000) % 10;
    cout << x5 << endl;

    if(x1 % 2 == 0)
    {
        sum += x1;
    } else {
        counter++;
    }

    if(x2 % 2 == 0)
    {
        sum += x2;
    } else {
        counter++;
    }

    if(x3 % 2 == 0)
    {
        sum += x3;
    } else {
        counter++;
    }

    if(x4 % 2 == 0)
    {
        sum += x4;
    } else {
        counter++;
    }

    if(x5 % 2 == 0)
    {
        sum += x5;
    } else {
        counter++;
    }

    cout << "The number of odd digits is: " << counter << endl;
    cout << "Sum of the even digits is: " << sum << endl;

    return 0;
}
