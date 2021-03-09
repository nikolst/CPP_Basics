/*Enter a number and print it from the last to the first digit.*/

#include<iostream>
using namespace std;
int main()
{
    int n, x;
    cout << "Enter n: ";
    cin >> n; //we enter the number from the keyboard
    while(n != 0)
    {
        x = n % 10;
        cout << x;
        n = n / 10;
    }
    cout << endl;
    
    return 0;
}
