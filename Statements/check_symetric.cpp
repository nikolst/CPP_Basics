/*Да се напише програма, която въвежда от клавиатурата цяло четирицифрено число. 
Да се провери дали числото е симетрично, т.е. записът му от ляво надясно и отдясно 
наляво е еднакъв.*/

#include<iostream>
using namespace std;
int main()
{
    int x; 
    cout << "Enter 4-digit number: ";
    cin >> x;

    int a, b, c, d;
    a = x % 10; //единиците на числото
    b = (x / 10) % 10; //десетиците на числото
    c = (x / 100) % 10; //стотиците на числото
    d = (x / 1000) % 10; //хилядните на числото

    if(a == d && b == c)
    {
        cout << "The number is symetric :)" << endl;
    } else {
        cout << "The number is not symetric :/" << endl;
    }
    return 0;
}
